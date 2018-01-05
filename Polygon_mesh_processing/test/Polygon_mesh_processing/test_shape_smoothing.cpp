#include <fstream>
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Surface_mesh.h>
#include <CGAL/Polygon_mesh_processing/shape_smoothing.h>
#include <boost/graph/graph_traits.hpp>


typedef CGAL::Exact_predicates_inexact_constructions_kernel Kernel;
typedef Kernel::Point_3 Point;
typedef CGAL::Surface_mesh<Point> Mesh;

typedef typename boost::graph_traits<Mesh>::vertex_descriptor vertex_descriptor;
typedef typename boost::graph_traits<Mesh>::halfedge_descriptor halfedge_descriptor;
typedef typename boost::graph_traits<Mesh>::edge_descriptor      edge_descriptor;

struct Constraints_pmap
{
  std::set<edge_descriptor>* set_ptr_;

  typedef edge_descriptor                     key_type;
  typedef bool                                value_type;
  typedef value_type&                         reference;
  typedef boost::read_write_property_map_tag  category;

public:
  Constraints_pmap(std::set<edge_descriptor>* set_ptr)
    : set_ptr_(set_ptr)
  {}
  Constraints_pmap()
    : set_ptr_(NULL)
  {}

  friend value_type get(const Constraints_pmap& map, const key_type& e)
  {
    CGAL_assertion(map.set_ptr_ != NULL);
    return !map.set_ptr_->empty()
         && map.set_ptr_->count(e);
  }
  friend void put(Constraints_pmap& map
                , const key_type& e, const value_type is)
  {
    CGAL_assertion(map.set_ptr_ != NULL);
    if (is)                map.set_ptr_->insert(e);
    else if(get(map, e))   map.set_ptr_->erase(e);
  }
};




int main(int argc, char* argv[])
{
  //const char* filename = "data/mannequin-devil.off";
    const char* filename = "data/simple_polygon.off";
  std::ifstream input(filename);


  namespace PMP = CGAL::Polygon_mesh_processing;


  Mesh mesh;
  input >> mesh;
  input.close();

  boost::property_map<Mesh, CGAL::vertex_point_t>::type vpmap =
          get(CGAL::vertex_point, mesh);




  // z max is 20 in the devil;
  std::set<edge_descriptor> selected_edges;

  for (edge_descriptor h : edges(mesh))
  {

    vertex_descriptor v_s = source(h, mesh);
    vertex_descriptor v_t = target(h, mesh);

    double z_s = get(vpmap, v_s).z();
    double z_t = get(vpmap, v_t).z();

    if(z_s  > 19.99 || z_t > 19.99)
      selected_edges.insert(h);

  }

  std::cout<<"number of selected_halfedges= "<<selected_edges.size()<<std::endl;

  Constraints_pmap ecmap(&selected_edges);


  double time_step = 1e-2;

  CGAL::PMP::smooth_modified_curvature_flow(mesh, time_step);









  /*
  std::set<halfedge_descriptor>::iterator it;
  for(it = selected_halfedges.begin(); it != selected_halfedges.end(); ++it)
  {
    std::cout<<*it<<"\n";
  }
  */



  std::ofstream out("data/output.off");
  out << mesh;
  out.close();





  return 0;
}

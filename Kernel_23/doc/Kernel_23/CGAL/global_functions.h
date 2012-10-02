namespace CGAL {



/*!
\addtogroup angle angle
\ingroup kernel_global_function
*/
/// @{

/*!
returns `OBTUSE`, `RIGHT` or `ACUTE` depending
on the angle formed by the two vectors \f$ u\f$ and \f$ v\f$.
*/
template <typename Kernel>
Angle angle(const Vector_2<Kernel>&u, 
const Vector_2<Kernel>&v);

/*!

returns `OBTUSE`, `RIGHT` or `ACUTE` depending
on the angle formed by the three points \f$ p\f$, \f$ q\f$, \f$ r\f$ (\f$ q\f$ being the vertex of
the angle). The returned value is the same as `angle(p - q, r - q)`.
*/
template <typename Kernel>
Angle angle(const Point_2<Kernel>& p,
const Point_2<Kernel>& q,
const Point_2<Kernel>& r);

/*!

returns `OBTUSE`, `RIGHT` or `ACUTE` depending
on the angle formed by the two vectors \f$ pq\f$, \f$ rs\f$. The returned value is
the same as `angle(q - p, s - r)`.
*/
template <typename Kernel>
Angle angle(const Point_2<Kernel>& p,
const Point_2<Kernel>& q,
const Point_2<Kernel>& r,
const Point_2<Kernel>& s);

/*!

returns `OBTUSE`, `RIGHT` or `ACUTE` depending
on the angle formed by the three points \f$ p\f$, \f$ q\f$, \f$ r\f$ (\f$ q\f$ being the vertex of
the angle).
*/
template <typename Kernel>
Angle angle(const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r);

/// @}

/// \addtogroup unit_normal unit_normal
/// \ingroup kernel_global_function
/// @{

/*!
computes the unit normal vector for the vectors `q-p` and `r-p`.
\pre The points `p`, `q`, and `r` must not be collinear.
*/
Vector_3<Kernel> unit_normal( const Point_3<Kernel>& p, const Point_3<Kernel>& q, const Point_3<Kernel>& r );

/// @}


/// \addtogroup area area
/// \ingroup kernel_global_function
/// @{

/*!
returns the signed area of the triangle defined by the points \f$ p\f$,
\f$ q\f$ and \f$ r\f$. 
*/
template <typename Kernel>
Kernel::FT area(const Point_2<Kernel>& p,
const Point_2<Kernel>& q,
const Point_2<Kernel>& r);

/// @}

/// \addtogroup are_ordered_along_line are_ordered_along_line
/// \ingroup kernel_global_function
/// \sa `CGAL::are_strictly_ordered_along_line` 
/// \sa `CGAL::collinear_are_ordered_along_line` 
/// \sa `CGAL::collinear_are_strictly_ordered_along_line` 
/// @{

/*!

returns `true`, iff the three points are collinear and 
`q` lies between `p` and `r`.
Note that `true` is returned, if `q==p` or
`q==r`.
*/
template <typename Kernel>
bool are_ordered_along_line(const Point_2<Kernel> &p, 
const Point_2<Kernel> &q, 
const Point_2<Kernel> &r);

/*!
returns `true`, iff the three points are collinear and 
`q` lies between `p` and `r`.
Note that `true` is returned, if `q==p` or
`q==r`.
*/
template <typename Kernel>
bool are_ordered_along_line(const Point_3<Kernel> &p, 
const Point_3<Kernel> &q, 
const Point_3<Kernel> &r);


/// @}

/// \addtogroup are_strictly_ordered_along_line are_strictly_ordered_along_line
/// \ingroup kernel_global_function
/// \sa `CGAL::are_ordered_along_line` 
/// \sa `CGAL::collinear_are_ordered_along_line` 
/// \sa `CGAL::collinear_are_strictly_ordered_along_line` 
/// @{

/*!
returns `true`, iff the three points are collinear and 
`q` lies strictly between `p` and `r`.
Note that `false` is returned, if `q==p` or
`q==r`.
*/
template <typename Kernel>
bool are_strictly_ordered_along_line(const Point_2<Kernel> &p, 
const Point_2<Kernel> &q, 
const Point_2<Kernel> &r);

/*!
returns `true`, iff the three points are collinear and 
`q` lies strictly between `p` and `r`.
Note that `false` is returned, if `q==p` or
`q==r`.
*/
template <typename Kernel>
bool are_strictly_ordered_along_line(const Point_3<Kernel> &p, 
const Point_3<Kernel> &q, 
const Point_3<Kernel> &r);

/// @}

/// \addtogroup barycenter barycenter
/// \ingroup kernel_global_function
/// \sa `CGAL::centroid` 
/// @{

/*!
compute the barycenter of the points \f$ p1\f$ and \f$ p2\f$ with corresponding
weights \f$ w1\f$ and \f$ 1-w1\f$.
*/
template <typename Kernel>
Point_2<Kernel>
barycenter( const Point_2<Kernel>& p1, const Kernel::FT&w1,
const Point_2<Kernel>& p2);

/*!
compute the barycenter of the points \f$ p1\f$ and \f$ p2\f$ with corresponding
weights \f$ w1\f$ and \f$ w2\f$. \pre w1+w2 != 0.
*/
template <typename Kernel>
Point_2<Kernel>
barycenter( const Point_2<Kernel>& p1, const Kernel::FT&w1,
const Point_2<Kernel>& p2, const Kernel::FT&w2);

/*!
compute the barycenter of the points \f$ p1\f$, \f$ p2\f$ and \f$ p3\f$ with corresponding
weights \f$ w1\f$, \f$ w2\f$ and \f$ 1-w1-w2\f$.
*/
template <typename Kernel>
Point_2<Kernel>
barycenter( const Point_2<Kernel>& p1, const Kernel::FT&w1,
const Point_2<Kernel>& p2, const Kernel::FT&w2,
const Point_2<Kernel>& p3);

/*!
compute the barycenter of the points \f$ p1\f$, \f$ p2\f$ and \f$ p3\f$ with corresponding
weights \f$ w1\f$, \f$ w2\f$ and \f$ w3\f$. \pre w1+w2+w3 != 0.
*/
template <typename Kernel>
Point_2<Kernel>
barycenter( const Point_2<Kernel>& p1, const Kernel::FT&w1,
const Point_2<Kernel>& p2, const Kernel::FT&w2,
const Point_2<Kernel>& p3, const Kernel::FT&w3);

/*!
compute the barycenter of the points \f$ p1\f$, \f$ p2\f$, \f$ p3\f$ and \f$ p4\f$ with corresponding
weights \f$ w1\f$, \f$ w2\f$, \f$ w3\f$ and \f$ 1-w1-w2-w3\f$.
*/
template <typename Kernel>
Point_2<Kernel>
barycenter( const Point_2<Kernel>& p1, const Kernel::FT&w1,
const Point_2<Kernel>& p2, const Kernel::FT&w2,
const Point_2<Kernel>& p3, const Kernel::FT&w3,
const Point_2<Kernel>& p4);

/*!
compute the barycenter of the points \f$ p1\f$, \f$ p2\f$, \f$ p3\f$ and \f$ p4\f$ with corresponding
weights \f$ w1\f$, \f$ w2\f$, \f$ w3\f$ and \f$ w4\f$. \pre w1+w2+w3+w4 != 0.
*/
template <typename Kernel>
Point_2<Kernel>
barycenter( const Point_2<Kernel>& p1, const Kernel::FT&w1,
const Point_2<Kernel>& p2, const Kernel::FT&w2,
const Point_2<Kernel>& p3, const Kernel::FT&w3,
const Point_2<Kernel>& p4, const Kernel::FT&w4);

/*!
compute the barycenter of the points \f$ p1\f$ and \f$ p2\f$ with corresponding
weights \f$ w1\f$ and \f$ 1-w1\f$.
*/
template <typename Kernel>
Point_3<Kernel>
barycenter( const Point_3<Kernel>& p1, const Kernel::FT&w1,
const Point_3<Kernel>& p2);

/*!
compute the barycenter of the points \f$ p1\f$ and \f$ p2\f$ with corresponding
weights \f$ w1\f$ and \f$ w2\f$. \pre w1+w2 != 0.
*/
template <typename Kernel>
Point_3<Kernel>
barycenter( const Point_3<Kernel>& p1, const Kernel::FT&w1,
const Point_3<Kernel>& p2, const Kernel::FT&w2);

/*!
compute the barycenter of the points \f$ p1\f$, \f$ p2\f$ and \f$ p3\f$ with corresponding
weights \f$ w1\f$, \f$ w2\f$ and \f$ 1-w1-w2\f$.
*/
template <typename Kernel>
Point_3<Kernel>
barycenter( const Point_3<Kernel>& p1, const Kernel::FT&w1,
const Point_3<Kernel>& p2, const Kernel::FT&w2,
const Point_3<Kernel>& p3);

/*!
compute the barycenter of the points \f$ p1\f$, \f$ p2\f$ and \f$ p3\f$ with corresponding
weights \f$ w1\f$, \f$ w2\f$ and \f$ w3\f$. \pre w1+w2+w3 != 0.
*/
template <typename Kernel>
Point_3<Kernel>
barycenter( const Point_3<Kernel>& p1, const Kernel::FT&w1,
const Point_3<Kernel>& p2, const Kernel::FT&w2,
const Point_3<Kernel>& p3, const Kernel::FT&w3);

/*!
compute the barycenter of the points \f$ p1\f$, \f$ p2\f$, \f$ p3\f$ and \f$ p4\f$ with corresponding
weights \f$ w1\f$, \f$ w2\f$, \f$ w3\f$ and \f$ 1-w1-w2-w3\f$.
*/
template <typename Kernel>
Point_3<Kernel>
barycenter( const Point_3<Kernel>& p1, const Kernel::FT&w1,
const Point_3<Kernel>& p2, const Kernel::FT&w2,
const Point_3<Kernel>& p3, const Kernel::FT&w3,
const Point_3<Kernel>& p4);

/*!
compute the barycenter of the points \f$ p1\f$, \f$ p2\f$, \f$ p3\f$ and \f$ p4\f$ with corresponding
weights \f$ w1\f$, \f$ w2\f$, \f$ w3\f$ and \f$ w4\f$. \pre w1+w2+w3+w4 != 0.
*/
template <typename Kernel>
Point_3<Kernel>
barycenter( const Point_3<Kernel>& p1, const Kernel::FT&w1,
const Point_3<Kernel>& p2, const Kernel::FT&w2,
const Point_3<Kernel>& p3, const Kernel::FT&w3,
const Point_3<Kernel>& p4, const Kernel::FT&w4);

/// @}

/// \addtogroup bisector bisector
/// \ingroup kernel_global_function
/// @{

/*!
constructs the bisector line of the two points `p` and `q`.
The bisector is oriented in such a way that `p` lies on its
positive side. \pre `p` and `q` are not equal.
*/
template <typename Kernel>
Line_2<Kernel> bisector(const Point_2<Kernel> &p,
const Point_2<Kernel> &q);

/*!
constructs the bisector of the two lines \f$ l1\f$ and \f$ l2\f$.
In the general case, the bisector has the direction of the vector which
is the sum of the normalized directions of the two lines, and which passes
through the intersection of `l1` and `l2`.
If `l1` and `l2` are parallel, then the bisector is defined as the line
which has the same direction as `l1`, and which is at the same distance
from `l1` and `l2`.
This function requires that `Kernel::RT` supports the `sqrt()`
operation.
*/
template <typename Kernel>
Line_2<Kernel> bisector(const Line_2<Kernel> &l1,
const Line_2<Kernel> &l2);

/*!
constructs the bisector plane of the two points `p` and `q`.
The bisector is oriented in such a way that `p` lies on its
positive side. \pre `p` and `q` are not equal.
*/
template <typename Kernel>
Plane_3<Kernel> bisector(const Point_3<Kernel> &p,
const Point_3<Kernel> &q);

/*!
constructs the bisector of the two planes \f$ h1\f$ and \f$ h2\f$.
In the general case, the bisector has a normal vector which has the same
direction as the sum of the normalized normal vectors of the two planes, and
passes through the intersection of `h1` and `h2`.
If `h1` and `h2` are parallel, then the bisector is defined as the
plane which has the same oriented normal vector as `l1`, and which is at
the same distance from `h1` and `h2`.
This function requires that `Kernel::RT` supports the `sqrt()`
operation.
*/
template <typename Kernel>
Plane_3<Kernel> bisector(const Plane_3<Kernel> &h1,
const Plane_3<Kernel> &h2);

/// @}

/// \addtogroup centroid centroid
/// \ingroup kernel_global_function
/// \sa `CGAL::barycenter` 
/// @{

/*!
compute the centroid of the points \f$ p\f$, \f$ q\f$, and \f$ r\f$.
*/
template <typename Kernel>
Point_2<Kernel>
centroid( const Point_2<Kernel>& p,
const Point_2<Kernel>& q,
const Point_2<Kernel>& r);

/*!
compute the centroid of the points \f$ p\f$, \f$ q\f$, \f$ r\f$, and \f$ s\f$.
*/
template <typename Kernel>
Point_2<Kernel>
centroid( const Point_2<Kernel>& p,
const Point_2<Kernel>& q,
const Point_2<Kernel>& r,
const Point_2<Kernel>& s);

/*!
compute the centroid of the triangle \f$ t\f$.
*/
template <typename Kernel>
Point_2<Kernel>
centroid( const Triangle_2<Kernel>& t);

/*!
compute the centroid of the points \f$ p\f$, \f$ q\f$, and \f$ r\f$.
*/
template <typename Kernel>
Point_3<Kernel>
centroid( const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r);

/*!
compute the centroid of the points \f$ p\f$, \f$ q\f$, \f$ r\f$, and \f$ s\f$.
*/
template <typename Kernel>
Point_3<Kernel>
centroid( const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r,
const Point_3<Kernel>& s);

/*!
compute the centroid of the triangle \f$ t\f$.
*/
template <typename Kernel>template <typename Kernel>
Point_3<Kernel>
centroid( const Triangle_3<Kernel>& t);

/*!
compute the centroid of the tetrahedron \f$ t\f$.
*/
template <typename Kernel>
Point_3<Kernel>
centroid( const Tetrahedron_3<Kernel>& t);

/// @}

/// \addtogroup circumcenter circumcenter
/// \ingroup kernel_global_function
/// @{

/*!
compute the center of the smallest circle passing through the points \f$ p\f$ and
\f$ q\f$. Note: this is the same as `CGAL::midpoint(p, q)` but is provided
for homogeneity. 
*/
template <typename Kernel>
Point_2<Kernel>
circumcenter( const Point_2<Kernel>& p,
const Point_2<Kernel>& q);

/*!
compute the center of the circle passing through the points \f$ p\f$, \f$ q\f$, and \f$ r\f$.
\pre \f$ p\f$, \f$ q\f$, and \f$ r\f$ are not collinear.
*/
template <typename Kernel>
Point_2<Kernel>
circumcenter( const Point_2<Kernel>& p,
const Point_2<Kernel>& q,
const Point_2<Kernel>& r);

/*!
compute the center of the circle passing through the vertices of \f$ t\f$.
\pre \f$ t\f$ is not degenerate.
*/
template <typename Kernel>
Point_2<Kernel>
circumcenter( const Triangle_2<Kernel>& t);

/*!
compute the center of the smallest sphere passing through the points \f$ p\f$ and
\f$ q\f$. Note: this is the same as `CGAL::midpoint(p, q)` but is provided
for homogeneity. 
*/
template <typename Kernel>
Point_3<Kernel>
circumcenter( const Point_3<Kernel>& p,
const Point_3<Kernel>& q);

/*!
compute the center of the circle passing through the points \f$ p\f$, \f$ q\f$, and \f$ r\f$.
\pre \f$ p\f$, \f$ q\f$, and \f$ r\f$ are not collinear.
*/
template <typename Kernel>
Point_3<Kernel>
circumcenter( const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r);

/*!
compute the center of the circle passing through the vertices of \f$ t\f$.
\pre \f$ t\f$ is not degenerate.
*/
template <typename Kernel>
Point_3<Kernel>
circumcenter( const Triangle_3<Kernel>& t);

/*!
compute the center of the sphere passing through the points \f$ p\f$, \f$ q\f$, \f$ r\f$, and \f$ s\f$.
\pre \f$ p\f$, \f$ q\f$, \f$ r\f$, and \f$ s\f$ are not coplanar.
*/
template <typename Kernel>
Point_3<Kernel>
circumcenter( const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r,
const Point_3<Kernel>& s);

/*!
compute the center of the sphere passing through the vertices of \f$ t\f$.
\pre \f$ t\f$ is not degenerate.
*/
template <typename Kernel>
Point_3<Kernel>
circumcenter( const Tetrahedron_3<Kernel>& t);

/// @}

/// \addtogroup collinear_are_ordered_along_line collinear_are_ordered_along_line
/// \ingroup kernel_global_function
/// \sa `CGAL::are_ordered_along_line` 
/// \sa `CGAL::are_strictly_ordered_along_line` 
/// \sa `CGAL::collinear_are_strictly_ordered_along_line` 
/// @{

/*!
returns `true`, iff `q` lies between `p` 
and `r`. \pre `p, q` and `r` are collinear.
*/
template <typename Kernel>
bool collinear_are_ordered_along_line(const Point_2<Kernel> &p,
const Point_2<Kernel> &q,
const Point_2<Kernel> &r);

/*!
returns `true`, iff `q` lies between `p` 
and `r`. \pre `p, q` and `r` are collinear.
*/
template <typename Kernel>
bool collinear_are_ordered_along_line(const Point_3<Kernel> &p,
const Point_3<Kernel> &q,
const Point_3<Kernel> &r);

/// @}

/// \addtogroup collinear_are_strictly_ordered_along_line collinear_are_strictly_ordered_along_line
/// \ingroup kernel_global_function
/// \sa `CGAL::are_ordered_along_line` 
/// \sa `CGAL::are_strictly_ordered_along_line` 
/// \sa `CGAL::collinear_are_ordered_along_line` 
/// @{

/*!
returns `true`, iff `q` lies strictly between 
`p` and `r`. \pre `p, q` and `r` are collinear.
*/
template <typename Kernel>
bool collinear_are_strictly_ordered_along_line(const Point_2<Kernel> &p,
const Point_2<Kernel> &q,
const Point_2<Kernel> &r);

/*!
returns `true`, iff `q` lies strictly between `p` 
and `r`. \pre `p, q` and `r` are collinear.
*/
template <typename Kernel>
bool collinear_are_strictly_ordered_along_line(
const Point_3<Kernel> &p,
const Point_3<Kernel> &q,
const Point_3<Kernel> &r);

/// @}

/// \addtogroup collinear collinear
/// \ingroup kernel_global_function
/// \sa `CGAL::left_turn` 
/// \sa `CGAL::orientation` 
/// \sa `CGAL::right_turn` 
/// @{

/*!
returns `true`, iff \f$ p\f$, \f$ q\f$, and \f$ r\f$ are collinear.
*/
template <typename Kernel>
bool collinear(const Point_2<Kernel> &p, 
const Point_2<Kernel> &q, 
const Point_2<Kernel> &r);

/*!
returns `true`, iff \f$ p\f$, \f$ q\f$, and \f$ r\f$ are collinear.
*/
template <typename Kernel>
bool collinear(const Point_3<Kernel> &p,
const Point_3<Kernel>&q,
const Point_3<Kernel>&r);

/// @}



/// \addtogroup compare_dihedral_angle compare_dihedral_angle
/// \ingroup kernel_global_function
/// @{

/*!
compares the dihedral angles \f$ \theta_1\f$ and \f$ \theta_2\f$, where
\f$ \theta_1\f$ is the dihedral angle, in \f$ [0, \pi]\f$, of the tetrahedron
\f$ (a_1, b_1, c_1, d_1)\f$ at the edge \f$ (a_1, b_1)\f$, and \f$ \theta_2\f$ is
the angle in \f$ [0, \pi]\f$ such that \f$ cos(\theta_2) = cosine\f$.
The result is the same as `compare_dihedral_angle(b1-a1, c1-a1, d1-a1, cosine)`.
\pre \f$ a_1\f$, \f$ b_1\f$, \f$ c_1\f$ are not collinear, and \f$ a_1\f$, \f$ b_1\f$, \f$ d_1\f$ are not collinear.
*/
template <typename Kernel>
Comparison_result compare_dihedral_angle(const Point_3<Kernel>& a1,
const Point_3<Kernel>& b1, 
const Point_3<Kernel>& c1,
const Point_3<Kernel>& d1, 
const Kernel::FT& cosine);

/*!
compares the dihedral angles \f$ \theta_1\f$ and \f$ \theta_2\f$, where
\f$ \theta_i\f$ is the dihedral angle in the tetrahedron \f$ (a_i, b_i,
c_i, d_i)\f$ at the edge \f$ (a_i, b_i)\f$. These two angles are computed
in \f$ [0, \pi]\f$.
The result is the same as `compare_dihedral_angle(b1-a1, c1-a1, d1-a1, b2-a2, c2-a2, d2-a2)`.
\pre For \f$ i \in\{1,2\}\f$, \f$ a_i\f$, \f$ b_i\f$, \f$ c_i\f$ are not collinear, and \f$ a_i\f$, \f$ b_i\f$, \f$ d_i\f$ are not collinear.
*/
template <typename Kernel>
Comparison_result compare_dihedral_angle(const Point_3<Kernel>& a1,
const Point_3<Kernel>& b1, 
const Point_3<Kernel>& c1,
const Point_3<Kernel>& d1, 
const Point_3<Kernel>& a2, 
const Point_3<Kernel>& b2, 
const Point_3<Kernel>& c2,
const Point_3<Kernel>& d2);

/*!
compares the dihedral angles \f$ \theta_1\f$ and \f$ \theta_2\f$, where
\f$ \theta_1\f$ is the dihedral angle, in \f$ [0, \pi]\f$, between the
vectorial planes defined by \f$ (u_1, v_1)\f$ and \f$ (u_1, w_1)\f$, and
\f$ \theta_2\f$ is the angle in \f$ [0, \pi]\f$ such that \f$ cos(\theta_2) =
cosine\f$.
\pre \f$ u_1\f$ and \f$ v_1\f$ are not collinear, and \f$ u_1\f$ and \f$ w_1\f$ are not collinear.
*/
template <typename Kernel>
Comparison_result
compare_dihedral_angle(const Vector_3<Kernel>& u1,
const Vector_3<Kernel>& v1, 
const Vector_3<Kernel>& w1,
const Kernel::FT& cosine);

/*!
compares the dihedral angles \f$ \theta_1\f$ and \f$ \theta_2\f$, where
\f$ \theta_i\f$ is the dihedral angle between the vectorial planes
defined by \f$ (u_i, v_i)\f$ and \f$ (u_i, w_i)\f$. These two angles are
computed in \f$ [0, \pi]\f$.
\pre For \f$ i \in\{1,2\}\f$, \f$ u_i\f$ and \f$ v_i\f$ are not collinear, and \f$ u_i\f$ and \f$ w_i\f$ are not collinear.
*/
template <typename Kernel>
Comparison_result
compare_dihedral_angle(const Vector_3<Kernel>& u1,
const Vector_3<Kernel>& v1, 
const Vector_3<Kernel>& w1,
const Vector_3<Kernel>& u2, 
const Vector_3<Kernel>& v2, 
const Vector_3<Kernel>& w2);

/// @}

/// \addtogroup compare_distance_to_point compare_distance_to_point
/// \ingroup kernel_global_function
/// \sa `CGAL::compare_squared_distance` 
/// \sa `CGAL::compare_signed_distance_to_line` 
/// \sa `CGAL::compare_signed_distance_to_plane` 
/// \sa `CGAL::has_larger_distance_to_point` 
/// \sa `CGAL::has_larger_signed_distance_to_line` 
/// \sa `CGAL::has_larger_signed_distance_to_plane` 
/// \sa `CGAL::has_smaller_distance_to_point` 
/// \sa `CGAL::has_smaller_signed_distance_to_line` 
/// \sa `CGAL::has_smaller_signed_distance_to_plane` 
/// @{

/*!
compares the distances of points `q` and
`r` to point `p`.
returns `SMALLER`, iff `q` is closer
to `p` than `r`, `LARGER`, iff
`r` is closer to `p` than `q`, and
`EQUAL` otherwise.
*/
template <typename Kernel>
Comparison_result
compare_distance_to_point(const Point_2<Kernel>& p,
const Point_2<Kernel>& q,
const Point_2<Kernel>& r);

/*!
compares the distances of points `q` and
`r` to point `p`.
returns `SMALLER`, iff `q` is closer
to `p` than `r`, `LARGER`, iff
`r` is closer to `p` than `q`, and
`EQUAL` otherwise.
*/
template <typename Kernel>
Comparison_result
compare_distance_to_point(const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r);

/// @}



/// \addtogroup compare_lexicographically_linear compare_lexicographically (Linear Kernel)
/// \ingroup kernel_global_function
/// @{

/*!
Compares the Cartesian coordinates of points `p` and
`q` lexicographically in \f$ xy\f$ order: first 
\f$ x\f$-coordinates are compared, if they are equal, \f$ y\f$-coordinates
are compared. This is the same function as `compare_xy` and exists for compatibility with `Point_d<Kernel>`.
*/
template <typename Kernel>
Comparison_result
compare_lexicographically(const Point_2<Kernel>& p, const Point_2<Kernel>& q);

/*!
Compares the Cartesian coordinates of points `p` and
`q` lexicographically in \f$ xyz\f$ order: first 
\f$ x\f$-coordinates are compared, if they are equal, \f$ y\f$-coordinates
are compared, and if both \f$ x\f$- and \f$ y\f$- coordinate are equal,
\f$ z\f$-coordinates are compared. This is the same function as `compare_xyz` and exists for compatibility with `Point_d<Kernel>`.
*/
template <typename Kernel>
Comparison_result
compare_lexicographically(const Point_3<Kernel>& p, const Point_3<Kernel>& q);

/// @}


/// \addtogroup compare_signed_distance_to_line compare_signed_distance_to_line
/// \ingroup kernel_global_function
/// \sa `CGAL::compare_distance_to_point` 
/// \sa `CGAL::compare_signed_distance_to_plane` 
/// \sa `CGAL::has_larger_distance_to_point` 
/// \sa `CGAL::has_larger_signed_distance_to_line` 
/// \sa `CGAL::has_larger_signed_distance_to_plane` 
/// \sa `CGAL::has_smaller_distance_to_point` 
/// \sa `CGAL::has_smaller_signed_distance_to_line` 
/// \sa `CGAL::has_smaller_signed_distance_to_plane` 
/// @{

/*!
returns `LARGER`
iff the signed distance of `p` and 
`l` is larger than the signed distance of `q`
and `l`, `SMALLER`, iff it is smaller,
and `EQUAL` iff both are equal.
*/
template <typename Kernel>
Comparison_result
compare_signed_distance_to_line(const Line_2<Kernel>& l,
const Point_2<Kernel>& p,
const Point_2<Kernel>& q);

/*!
returns `LARGER`
iff the signed distance of `r` and 
`l` is larger than the signed distance of `s`
and `l`, `SMALLER`, iff it is smaller,
and `EQUAL` iff both are equal, where 
`l` is the directed line through `p` and `q`.
*/
template <typename Kernel>
Comparison_result
compare_signed_distance_to_line(const Point_2<Kernel>& p,
const Point_2<Kernel>& q,
const Point_2<Kernel>& r,
const Point_2<Kernel>& s);

/*!
returns `LARGER`
iff the signed distance of `p` and 
`h` is larger than the signed distance of `q`
and `h`, `SMALLER`, iff it is smaller,
and `EQUAL` iff both are equal.
*/
template <typename Kernel>
Comparison_result
compare_signed_distance_to_plane(const Plane_3<Kernel>& h,
const Point_3<Kernel>& p,
const Point_3<Kernel>& q);

/*!
returns `LARGER`
iff the signed distance of `s` and 
`h` is larger than the signed distance of `t`
and `h`, `SMALLER`, iff it is smaller,
and `EQUAL` iff both are equal, where
`h` is the oriented plane through `p`, `q` and
`r`.
*/
template <typename Kernel>
Comparison_result
compare_signed_distance_to_plane(const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r,
const Point_3<Kernel>& s,
const Point_3<Kernel>& t);

/// @}



/// \addtogroup compare_slopes compare_slopes
/// \ingroup kernel_global_function
/// @{

/*!
compares the slopes of the lines `l1` and `l2`
*/
template <typename Kernel>
Comparison_result compare_slopes(const Line_2<Kernel> &l1,
const Line_2<Kernel> &l2);

/*!
compares the slopes of the segments `s1` and `s2`
*/
template <typename Kernel>
Comparison_result compare_slopes(const Segment_2<Kernel> &s1,
const Segment_2<Kernel> &s2);

/// @}

/// \addtogroup compare_squared_distance compare_squared_distance
/// \ingroup kernel_global_function
/// \sa `CGAL::compare_distance_to_point` 
/// \sa `CGAL::compare_signed_distance_to_line` 
/// \sa `CGAL::compare_signed_distance_to_plane` 
/// \sa `CGAL::has_larger_distance_to_point` 
/// \sa `CGAL::has_larger_signed_distance_to_line` 
/// \sa `CGAL::has_larger_signed_distance_to_plane` 
/// \sa `CGAL::has_smaller_distance_to_point` 
/// \sa `CGAL::has_smaller_signed_distance_to_line` 
/// \sa `CGAL::has_smaller_signed_distance_to_plane` 
/// @{

/*!
compares the squared distance of points `p` and
`q` to `d2`.
*/
template <typename Kernel>
Comparison_result
compare_squared_distance(const Point_2<Kernel>& p,
const Point_2<Kernel>& q,
const typename Kernel::FT& d2);

/*!
compares the squared distance of points `p` and
`q` to `d2`.
*/
template <typename Kernel>
Comparison_result
compare_squared_distance(const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const typename Kernel::FT& d2);

/// @}

/// \addtogroup compare_squared_radius compare_squared_radius
/// \ingroup kernel_global_function
/// @{

/*!
compares the squared radius of the sphere of radius 0 centered at
`p` to `sr`. 
This returns the opposite sign of `sr`.
*/
template <typename Kernel>
Comparison_result
compare_squared_radius(const Point_3<Kernel>& p,
const typename Kernel::FT& sr);

/*!
compares the squared radius of the sphere defined by the
points `p` and `q` to `sr`.
*/
template <typename Kernel>
Comparison_result
compare_squared_radius(const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const typename Kernel::FT& sr);

/*!
compares the squared radius of the sphere defined by the
points `p`, `q`, and `r` to `sr`.
*/
template <typename Kernel>
Comparison_result
compare_squared_radius(const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r,
const typename Kernel::FT& sr);

/*!
compares the squared radius of the sphere defined by the
points `p`, `q`, `r`, and `r` to `sr`.
*/
template <typename Kernel>
Comparison_result
compare_squared_radius(const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r,
const Point_3<Kernel>& s,
const typename Kernel::FT& sr);

/// @}

/*!
\defgroup compare_x compare_x
\ingroup kernel_global_function

\details Depending on which \cgal kernel is used,
different versions of this global function are available. This is
described below.

\sa `CGAL::compare_xy` 
\sa `CGAL::compare_xyz` 
\sa `CGAL::compare_x_at_y` 
\sa `CGAL::compare_y` 
\sa `CGAL::compare_yx` 
\sa `CGAL::compare_y_at_x` 
\sa `CGAL::compare_z` 
*/

/*!
\addtogroup compare_x_linear compare_x (Linear Kernel)
\ingroup compare_x
\anchor figcompare_x
\image html compare1.gif 
*/
/// @{

/*!
compares the \f$ x\f$-coordinates of \f$ p\f$ and \f$ q\f$.
*/
template <typename Kernel>
Comparison_result compare_x(const Point_2<Kernel> &p, const Point_2<Kernel> &q);

/*!
compares the \f$ x\f$-coordinates of \f$ p\f$ and \f$ q\f$.
*/
template <typename Kernel>
Comparison_result compare_x(const Point_3<Kernel> &p, const Point_3<Kernel> &q);
/*!
compares the \f$ x\f$-coordinates of \f$ p\f$ and the intersection 
of lines \f$ l1\f$ and \f$ l2\f$.
See Figure \ref figcompare_x (a).
*/
template <typename Kernel>
Comparison_result compare_x(const Point_2<Kernel> &p,
                            const Line_2<Kernel> &l1,
                            const Line_2<Kernel> &l2);

/*!
compares the \f$ x\f$-coordinates of  the intersection of line \f$ l\f$
with line \f$ h1\f$ and with line \f$ h2\f$.

See Figure \ref figcompare_x (b).
*/
template <typename Kernel>
Comparison_result compare_x(const Line_2<Kernel> &l,
                            const Line_2<Kernel> &h1,
                            const Line_2<Kernel> &h2);
/*!
compares the \f$ x\f$-coordinates of the intersection of lines \f$ l1\f$
and \f$ l2\f$ and  the intersection of lines \f$ h1\f$ and \f$ h2\f$.

See Figure \ref figcompare_x (c).
*/
template <typename Kernel>
Comparison_result compare_x(const Line_2<Kernel> &l1,
                                        const Line_2<Kernel> &l2,
                                        const Line_2<Kernel> &h1,
                                        const Line_2<Kernel> &h2);

/// @}

/*!
\addtogroup compare_x_circular compare_x (Circular Kernel)
\ingroup compare_x
\details See Chapter \ref chaptercircularkernel.

\code
#include <CGALCGAL/global_functions_circular_kernel_2.h>
\endcode

If this kernel is used, in addition to the function and the
combination of 2D types described above, another version of the function
is provided.
*/
/// @{

/*!
compares the \f$ x\f$-coordinates of \f$ p\f$ and \f$ q\f$.
*/
template <typename CircularKernel>
Comparison_result 
  compare_x(const Circular_arc_point_2<CircularKernel> &p,
            const Circular_arc_point_2<CircularKernel> &q);
/*!
compares the \f$ x\f$-coordinates of \f$ p\f$ and \f$ q\f$.
*/
template <typename CircularKernel>
Comparison_result 
  compare_x(const Circular_arc_point_2<CircularKernel> &p,
            const Point_2<CircularKernel> &q);

/// @}

/*!
\addtogroup compare_x_spherical compare_x (Spherical Kernel)
\ingroup compare_x
\details See Chapter \ref chaptersphericalkernel.

\code
#include <CGAL/global_functions_spherical_kernel_3.h>
\endcode

If this kernel is used, in addition to the function and the
combination of 2D types described above, another version of the function
is provided.
*/
/// @{

/*!
compares the \f$ x\f$-coordinates of \f$ p\f$ and \f$ q\f$.
*/
template <typename SphericalKernel>
Comparison_result 
  compare_x(const Circular_arc_point_3<SphericalKernel> &p,
            const Circular_arc_point_3<SphericalKernel> &q);

/*!
compares the \f$ x\f$-coordinates of \f$ p\f$ and \f$ q\f$.
*/
template <typename SphericalKernel>
Comparison_result 
  compare_x(const Circular_arc_point_3<SphericalKernel> &p,
            const Point_3<SphericalKernel> &q);

/// @}

/*!
\defgroup compare_xy compare_xy
\ingroup kernel_global_function

\details Depending on which \cgal kernel is used, different versions of this
global function are available. 

\sa `CGAL::compare_xyz` 
\sa `CGAL::compare_x` 
\sa `CGAL::compare_x_at_y` 
\sa `CGAL::compare_y` 
\sa `CGAL::compare_yx` 
\sa `CGAL::compare_y_at_x` 
\sa `CGAL::compare_z` 

*/


/*!
\addtogroup compare_xy_linear compare_xy (Linear Kernel)
\ingroup compare_xy
*/
/// @{

/*!
Compares the Cartesian coordinates of points `p` and
`q` lexicographically in \f$ xy\f$ order: first 
\f$ x\f$-coordinates are compared, if they are equal, \f$ y\f$-coordinates
are compared.
*/
template <typename Kernel>
Comparison_result
compare_xy(const Point_2<Kernel>& p, const Point_2<Kernel>& q);

/*!
Compares the Cartesian coordinates of points `p` and `q`
lexicographically in \f$ xy\f$ order: first \f$ x\f$-coordinates are
compared, if they are equal, \f$ y\f$-coordinates are compared.

*/
template <typename Kernel>
Comparison_result
compare_xy(const Point_3<Kernel>& p, const Point_3<Kernel>& q);

/// @}

/*!
\addtogroup compare_xy_circular compare_xy (Circular Kernel)
\ingroup compare_xy
\details See Chapter \ref chaptercircularkernel.

\code
#include <CGAL/global_functions_circular_kernel_2.h>
\endcode

If this kernel is used, in addition to the function and the
combination of 2D types described above, another version of the
function is provided.
*/
/// @{

/*!
Compares the \f$ x\f$ and \f$ y\f$ Cartesian coordinates of points `p` and
`q` lexicographically.
*/
template <typename CircularKernel>
Comparison_result 
  compare_xy(const Circular_arc_point_2<CircularKernel> &p,
            const Circular_arc_point_2<CircularKernel> &q);

/*!
Compares the \f$ x\f$ and \f$ y\f$ Cartesian coordinates of points `p` and
`q` lexicographically.
*/
template <typename CircularKernel>
Comparison_result 
compare_xy(const Circular_arc_point_2<CircularKernel> &p,
            const Point_2<CircularKernel> &q);

/// @}

/*!
\addtogroup compare_xy_spherical compare_xy (Spherical Kernel)
\ingroup compare_xy
\details See Chapter \ref chaptersphericalkernel.

\code
#include <CGAL/global_functions_spherical_kernel_3.h>
\endcode

If this kernel is used, in addition to the function and the
combination of 2D types described above, another version of the function
is provided.
*/
/// @{

/*!

Compares the \f$ x\f$ and \f$ y\f$ Cartesian coordinates of points `p` and
`q` lexicographically.
*/
template <typename SphericalKernel>
Comparison_result 
  compare_xy(const Circular_arc_point_3<SphericalKernel> &p,
            const Circular_arc_point_3<SphericalKernel> &q);
/*!

Compares the \f$ x\f$ and \f$ y\f$ Cartesian coordinates of points `p` and
`q` lexicographically.
*/
template <typename SphericalKernel>
Comparison_result 
  compare_xy(const Circular_arc_point_3<SphericalKernel> &p,
            const Point_3<SphericalKernel> &q);

/// @}

/*!
\addtogroup compare_x_at_y compare_x_at_y
\ingroup kernel_global_function

\anchor figcomparexaty
\image html compare_x_at_y.gif

\sa `CGAL::compare_xy` 
\sa `CGAL::compare_xyz` 
\sa `CGAL::compare_x` 
\sa `CGAL::compare_y` 
\sa `CGAL::compare_yx` 
\sa `CGAL::compare_y_at_x` 
\sa `CGAL::compare_z` 
*/
/// @{

/*!
compares the \f$ x\f$-coordinates of \f$ p\f$ and the horizontal projection
of `p` on `h`.
See Figure \ref figcomparexaty (a).
\pre `h` is not horizontal.
*/
template <typename Kernel>
Comparison_result compare_x_at_y(const Point_2<Kernel> &p,
const Line_2<Kernel> &h);

/*!
This function compares the \f$ x\f$-coordinates of the horizontal projection 
of `p` on `h1` and on `h2`.
See Figure \ref figcomparexaty (b).
\pre `h1` and `h2` are not horizontal.
*/
template <typename Kernel>
Comparison_result compare_x_at_y(const Point_2<Kernel> &p,
const Line_2<Kernel> &h1,
const Line_2<Kernel> &h2);

/*!
Let \f$ p\f$ be the intersection of lines \f$ l1\f$ and \f$ l2\f$.
This function compares the \f$ x\f$-coordinates of \f$ p\f$ and 
the horizontal projection of `p` on `h`.
See Figure \ref figcomparexaty (c).
\pre `l1` and `l2` intersect and are not horizontal; `h` is not horizontal.
*/
template <typename Kernel>
Comparison_result compare_x_at_y(const Line_2<Kernel> &l1,
const Line_2<Kernel> &l2,
const Line_2<Kernel> &h);

/*!
Let \f$ p\f$ be the intersection of lines \f$ l1\f$ and \f$ l2\f$. This 
function compares the \f$ x\f$-coordinates of the horizontal projection of 
`p` on `h1` and on `h2`
See Figure \ref figcomparexaty (d).
\pre `l1` and `l2` intersect and are not horizontal; `h1` and `h2` are not horizontal.
*/
template <typename Kernel>
Comparison_result compare_x_at_y(const Line_2<Kernel> &l1,
const Line_2<Kernel> &l2,
const Line_2<Kernel> &h1,
const Line_2<Kernel> &h2);

/// @}

/*!
  \addtogroup compare_y_at_x compare_y_at_x
  \ingroup kernel_global_function

  \anchor figcompareyatx
  \image html compare2.gif

  \sa `CGAL::compare_xy` 
  \sa `CGAL::compare_xyz` 
  \sa `CGAL::compare_x` 
  \sa `CGAL::compare_y` 
  \sa `CGAL::compare_yx` 
  \sa `CGAL::compare_x_at_y` 
  \sa `CGAL::compare_z` 
*/
/// @{

/*!
  compares the \f$y\f$-coordinates of \f$p\f$ and the vertical projection
  of `p` on `h`.
  See Figure \ref figcompareyatx (d).

  \pre `h` is not vertical.
*/
template <typename Kernel>
Comparison_result compare_y_at_x(const Point_2<Kernel> &p,
                                 const Line_2<Kernel> &h);

/*!
  compares the \f$y\f$-coordinates of the vertical projection 
  of `p` on `h1` and on `h2`.
  See Figure \ref figcompareyatx (e).

  \pre `h1` and `h2` are not vertical.
*/
template <typename Kernel>
Comparison_result compare_y_at_x(const Point_2<Kernel> &p,
                                 const Line_2<Kernel> &h1,
                                 const Line_2<Kernel> &h2);


/*!
  Let \f$p\f$ be the `intersection` of lines \f$l1\f$ and \f$l2\f$.
  This function compares the \f$y\f$-coordinates of \f$p\f$ and 
  the vertical projection of `p` on `h`
  See Figure \ref figcompareyatx (f).

  \pre `l1`, `l2` intersect and `h` is not vertical.
*/
template <typename Kernel>
Comparison_result compare_y_at_x(const Line_2<Kernel> &l1,
                                 const Line_2<Kernel> &l2,
                                 const Line_2<Kernel> &h);

/*!
  Let \f$p\f$ be the `intersection` of lines \f$l1\f$ and \f$l2\f$. This function 
  compares the \f$y\f$-coordinates of the vertical projection of `p` on 
  `h1` and on `h2`.
  See Figure \ref figcompareyatx (g).
  \pre `l1` and `l2` intersect; `h1` and  `h2` are not vertical.
*/
template <typename Kernel>
Comparison_result compare_y_at_x(const Line_2<Kernel> &l1,
                                 const Line_2<Kernel> &l2,
                                 const Line_2<Kernel> &h1,
                                 const Line_2<Kernel> &h2);

/*!
  compares the \f$y\f$-coordinates of \f$p\f$ and the vertical projection
  of `p` on `s`.  If `s` is vertical, then return
  `EQUAL` when `p` lies on `s`, `SMALLER` when `p` lies
  under {s}, and `LARGER` otherwise.
  \pre `p` is within the x range of `s`.
*/
template <typename Kernel>
Comparison_result compare_y_at_x(const Point_2<Kernel> &p,
                                 const Segment_2<Kernel> &s);

/*!
  compares the \f$y\f$-coordinates of the vertical projection 
  of `p` on `s1` and on `s2`.  If `s1` or `s2`
  is vertical, then return `EQUAL` if they intersect, otherwise return
  `SMALLER` if `s1` lies below `s2`, and return `LARGER`
  otherwise.
  \pre `p` is within the x range of `s1` and `s2`.
*/
template <typename Kernel>
Comparison_result compare_y_at_x(const Point_2<Kernel> &p,
                                 const Segment_2<Kernel> &s1,
                                 const Segment_2<Kernel> &s2);

/*!
  \name With the 2D Circular Kernel
  See \ref chaptercircularkernel.

  \code 
  #include <CGAL/global_functions_circular_kernel_2.h>
  \endcode

  If this kernel is used, in addition to the function and the
  combination of 2D types described above, another version of the function
  is provided.
*/
/// @{

/// Same as above, for a point and a circular arc.
template <typename CircularKernel>
Comparison_result 
compare_y_at_x(const Circular_arc_point_2<CircularKernel> &p, 
               const Circular_arc_2<CircularKernel> &a);

/// Same as above, for a point and a line segment.
template <typename CircularKernel>
Comparison_result 
compare_y_at_x(const Circular_arc_point_2<CircularKernel> &p, 
               const Line_arc_2<CircularKernel> &a);


/// @}

/// @}


/*!
\defgroup compare_y compare_y
\ingroup kernel_global_function

\details Depending on which \cgal kernel is used, different versions of this
global function are available.

\sa `CGAL::compare_xy` 
\sa `CGAL::compare_xyz` 
\sa `CGAL::compare_x` 
\sa `CGAL::compare_x_at_y` 
\sa `CGAL::compare_yx` 
\sa `CGAL::compare_y_at_x` 
\sa `CGAL::compare_z` 
*/

/*!
\addtogroup compary_y_linear compare_y (Linear Kernel)
\ingroup compare_y
\details See Chapter \ref chapterkernel23

\anchor figcompare13
\image html compare1.gif

*/
/// @{
/*!
  compares Cartesian \f$ y\f$-coordinates of \f$ p\f$ and \f$ q\f$.
*/
template <typename Kernel>
Comparison_result compare_y(const Point_2<Kernel> &p,
                            const Point_2<Kernel> &q);
/*!
  compares Cartesian \f$ y\f$-coordinates of \f$ p\f$ and \f$ q\f$.
*/
template <typename Kernel>
Comparison_result compare_y(const Point_3<Kernel> &p,
                            const Point_3<Kernel> &q);

/*!
  compares the \f$ y\f$-coordinates of \f$ p\f$ and the intersection of lines
  \f$ l1\f$ and \f$ l2\f$.
  See Figure \ref figcompare13 (a).
*/
template <typename Kernel>
Comparison_result compare_y(const Point_2<Kernel> &p,
                            const Line_2<Kernel> &l1,
                            const Line_2<Kernel> &l2);
/*!

  compares the \f$ y\f$-coordinates of the intersection of line \f$ l\f$
  with line \f$ h1\f$ and with line \f$ h2\f$.
  See Figure \ref figcompare13 (b).
*/
template <typename Kernel>
Comparison_result compare_y(const Line_2<Kernel> &l,
                            const Line_2<Kernel> &h1,
                            const Line_2<Kernel> &h2);
/*!
  compares the \f$ y\f$-coordinates of the intersection of lines \f$ l1\f$
  and \f$ l2\f$ and  the intersection of lines \f$ h1\f$ and \f$ h2\f$.
  See Figure \ref figcompare13 (c).
*/
template <typename Kernel>
Comparison_result compare_y(const Line_2<Kernel> &l1,
                            const Line_2<Kernel> &l2,
                            const Line_2<Kernel> &h1,
                            const Line_2<Kernel> &h2);

/// @}

/*!
\addtogroup compare_y_circular compare_y (Circular Kernel)
\ingroup compare_y
\details See Chapter \ref chaptercircularkernel.

\code
#include <CGAL/global_functions_circular_kernel_2.h>
\endcode

If the circular kernel is used, in addition to the function and the
combination of 2D types of the linear kernel the following overloaded
versions are provided.
*/
/// @{
/*!
  compares the \f$ y\f$-coordinates of \f$ p\f$ and \f$ q\f$.
*/
template <typename CircularKernel>
Comparison_result 
compare_y(const Circular_arc_point_2<CircularKernel> &p,
          const Circular_arc_point_2<CircularKernel> &q);

/*!
  compares the \f$ y\f$-coordinates of \f$ p\f$ and \f$ q\f$.
*/template <typename CircularKernel>
Comparison_result 
compare_y(const Circular_arc_point_2<CircularKernel> &p,
          const Point_2<CircularKernel> &q);

/// @}

/*!
\addtogroup compare_y_spherical compare_y (Spherical Kernel)
\ingroup compare_y
\details See Chapter \ref chaptersphericalkernel.

\code
#include <CGAL/global_functions_circular_kernel_3.h>
\endcode

If this kernel is used, in addition to the function and the
combination of 2D types described above, another version of the function
is provided.
*/
/// @{
/*!
compares the \f$ y\f$-coordinates of \f$ p\f$ and \f$ q\f$.
*/
template <typename SphericalKernel>
Comparison_result 
  compare_y(const Circular_arc_point_3<SphericalKernel> &p,
            const Circular_arc_point_3<SphericalKernel> &q);
/*!
compares the \f$ y\f$-coordinates of \f$ p\f$ and \f$ q\f$.
*/
template <typename SphericalKernel>
Comparison_result 
  compare_y(const Circular_arc_point_3<SphericalKernel> &p,
            const Point_3<SphericalKernel> &q);
/// @}


/*!
\defgroup compare_xyz compare_xyz
\ingroup kernel_global_function

\details Depending on which \cgal kernel is used, different versions of this
global function are available.

\sa `CGAL::compare_xy` 
\sa `CGAL::compare_x` 
\sa `CGAL::compare_x_at_y` 
\sa `CGAL::compare_y` 
\sa `CGAL::compare_yx` 
\sa `CGAL::compare_y_at_x` 
\sa `CGAL::compare_z` 

*/

/*!
\addtogroup compare_xyz_linear compare_xyz (Linear Kernel)
\ingroup compare_xyz
*/
/// @{

/*!
Compares the Cartesian coordinates of points `p` and
`q` lexicographically in \f$ xyz\f$ order: first 
\f$ x\f$-coordinates are compared, if they are equal, \f$ y\f$-coordinates
are compared, and if both \f$ x\f$- and \f$ y\f$- coordinate are equal,
\f$ z\f$-coordinates are compared.
*/
template <typename Kernel>
Comparison_result
compare_xyz(const Point_3<Kernel>& p, const Point_3<Kernel>& q);

/// @}

/*!
\addtogroup compare_xyz_spherical compare_xyz (Spherical Kernel)
\ingroup compare_xyz
\details See Chapter \ref chaptersphericalkernel

\code
#include <CGAL/global_functions_circular_kernel_3.h>
\endcode

If this kernel is used, in addition to the function and the
combination of 2D types described above, another version of the
function is provided.

*/
/// @{

/*! Compares the Cartesian coordinates of points `p` and `q` lexicographically.
*/
template <typename SphericalKernel>
Comparison_result 
compare_xyz(const Circular_arc_point_3<SphericalKernel> &p,
const Circular_arc_point_3<SphericalKernel> &q);

/*!
Compares the Cartesian coordinates of points `p` and `q` lexicographically.
*/
template <typename SphericalKernel>
Comparison_result 
compare_xyz(const Circular_arc_point_3<SphericalKernel> &p,
const Point_3<SphericalKernel> &q);

/// @}


/*!
\addtogroup compare_z compare_z
\ingroup kernel_global_function

\details Depending on which \cgal kernel is used, 
different versions of this global function are available. This is 
described below. 

\sa `CGAL::compare_xy` 
\sa `CGAL::compare_xyz` 
\sa `CGAL::compare_x` 
\sa `CGAL::compare_x_at_y` 
\sa `CGAL::compare_y` 
\sa `CGAL::compare_yx` 
\sa `CGAL::compare_y_at_x` 
*/
/// @{

/*!
compares the \f$ z\f$-coordinates of \f$ p\f$ and \f$ q\f$.
*/
template <typename Kernel>
Comparison_result compare_z(const Point_3<Kernel> &p, const Point_3<Kernel> &q);

/*!
\name With the 3D Spherical Kernel

\details See Chapter \ref chaptersphericalkernel

\code
#include <CGAL/global_functions_circular_kernel_3.h>
\endcode

If this kernel is used, in addition to the function and the
combination of 2D types described above, another version of the
function is provided.

*/
/// @{


/*!
compares the \f$ z\f$-coordinates of \f$ p\f$ and \f$ q\f$.
*/
template <typename SphericalKernel>
Comparison_result 
compare_z(const Circular_arc_point_3<SphericalKernel> &p, const Circular_arc_point_3<SphericalKernel> &q);

/*!
compares the \f$ z\f$-coordinates of \f$ p\f$ and \f$ q\f$.
*/
template <typename SphericalKernel>
Comparison_result 
compare_z(const Circular_arc_point_3<SphericalKernel> &p, const Point_3<SphericalKernel> &q);

/// @}
/// @}

/// \addtogroup compare_yx compare_yx
/// \ingroup kernel_global_function
/// \sa `CGAL::compare_xy` 
/// \sa `CGAL::compare_xyz` 
/// \sa `CGAL::compare_x` 
/// \sa `CGAL::compare_x_at_y` 
/// \sa `CGAL::compare_y` 
/// \sa `CGAL::compare_y_at_x` 
/// \sa `CGAL::compare_z` 
/// @{

/*!
Compares the Cartesian coordinates of points `p` and
`q` lexicographically in \f$ yx\f$ order: first 
\f$ y\f$-coordinates are compared, if they are equal, \f$ x\f$-coordinates
are compared.
*/
template <typename Kernel>
Comparison_result
compare_yx(const Point_2<Kernel>& p, const Point_2<Kernel>& q);

/// @}


/// \addtogroup coplanar coplanar
/// \ingroup kernel_global_function
/// \sa `CGAL::coplanar_orientation` 
/// \sa `CGAL::coplanar_side_of_bounded_circle` 
/// @{

/*!
returns `true`, if \f$ p\f$, \f$ q\f$, \f$ r\f$, and \f$ s\f$ are coplanar.
*/
template <typename Kernel>
bool coplanar(const Point_3<Kernel> &p,
const Point_3<Kernel>&q,
const Point_3<Kernel>&r,
const Point_3<Kernel>&s);

/// @}

/// \addtogroup coplanar_orientation coplanar_orientation
/// \ingroup kernel_global_function
/// \sa `CGAL::coplanar` 
/// \sa `CGAL::coplanar_side_of_bounded_circle` 
/// \sa `CGAL::orientation` 
/// @{

/*!
Let \f$ P\f$ be the plane defined by the points `p`, `q`,
and `r`. Note that the order defines the orientation of
\f$ P\f$. The function computes the orientation of points `p`, 
`q`, and `s` in \f$ P\f$: Iff `p`, `q`, `s` are
collinear, `COLLINEAR` is returned. Iff \f$ P\f$ and the plane 
defined by `p`, `q`, and `s` have the same orientation, 
`POSITIVE` is returned; otherwise `NEGATIVE` is returned. 
\pre `p`, `q`, `r`, and `s` are coplanar and `p`, `q`, and `r` are not collinear.
*/
template <typename Kernel>
Orientation coplanar_orientation(const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r,
const Point_3<Kernel>& s);

/*!
If `p,q,r` are collinear, then `COLLINEAR` is returned.
If not, then `p,q,r` define a plane \f$ P\f$. The return value in this case is
either `POSITIVE` or `NEGATIVE`, but we don't specify it explicitly.
However, we guarantee that all calls to this predicate over 3 points in \f$ P\f$
will return a coherent orientation if considered a 2D orientation in \f$ P\f$.
*/
template <typename Kernel>
Orientation coplanar_orientation(const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r);

/// @}



/// \addtogroup coplanar_side_of_bounded_circle coplanar_side_of_bounded_circle
/// \ingroup kernel_global_function
/// \sa `CGAL::coplanar_orientation` 
/// \sa `CGAL::side_of_bounded_circle` 
/// @{

/*!
returns the bounded side of the circle defined
by `p`, `q`, and `r` on which `s` lies.
\pre `p`, `q`, `r`, and `s` are coplanar and `p`, `q`, and `r` are not collinear.
*/
template <typename Kernel>
Bounded_side coplanar_side_of_bounded_circle(const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r,
const Point_3<Kernel>& s);

/// @}


/// \addtogroup cross_product cross_product
/// \ingroup kernel_global_function
/// @{

/*!
returns the cross product of \f$ u\f$ and \f$ v\f$.
*/
template <typename Kernel>
Vector_3<Kernel> cross_product( const Vector_3<Kernel>& u, 
const Vector_3<Kernel>& v);

/// @}

/// \addtogroup determinant determinant
/// \ingroup kernel_global_function
/// \sa `CGAL::orientation` 
/// \sa `CGAL::collinear` 
/// \sa `CGAL::left_turn` 
/// \sa `CGAL::right_turn` 
/// @{

/*!
returns the determinant of \f$ v\f$ and \f$ w\f$.
*/
template <typename Kernel>
Kernel::FT determinant(const Vector_2<Kernel>& v,
const Vector_2<Kernel>& w);

/*!
returns the determinant of \f$ u\f$, \f$ v\f$ and \f$ w\f$.
*/
template <typename Kernel>
Kernel::FT determinant(const Vector_3<Kernel>& u,
const Vector_3<Kernel>& v,
const Vector_3<Kernel>& w);

/// @}

/// \addtogroup equidistant_line equidistant_line
/// \ingroup kernel_global_function
/// @{

/*!
constructs the line which is at the same distance from the three points
`p`, `q` and `r`.
\pre `p`, `q` and `r` are not collinear.
*/
template <typename Kernel>
Line_3<Kernel> equidistant_line(const Point_3<Kernel> &p,
const Point_3<Kernel> &q,
const Point_3<Kernel> &r);

/// @}

/// \addtogroup has_larger_distance_to_point has_larger_distance_to_point
/// \ingroup kernel_global_function
/// \sa `CGAL::compare_distance_to_point` 
/// \sa `CGAL::compare_signed_distance_to_line` 
/// \sa `CGAL::compare_signed_distance_to_plane` 
/// \sa `CGAL::has_larger_signed_distance_to_line` 
/// \sa `CGAL::has_larger_signed_distance_to_plane` 
/// \sa `CGAL::has_smaller_distance_to_point` 
/// \sa `CGAL::has_smaller_signed_distance_to_line` 
/// \sa `CGAL::has_smaller_signed_distance_to_plane` 
/// @{

/*!
returns `true` iff the distance between `q`
and `p` is larger than the distance between `r`
and `p`.
*/
template <typename Kernel>
bool
has_larger_distance_to_point(const Point_2<Kernel>& p,
const Point_2<Kernel>& q,
const Point_2<Kernel>& r);

/*!
returns `true` iff the distance between `q`
and `p` is larger than the distance between `r`
and `p`.
*/
template <typename Kernel>
bool
has_larger_distance_to_point(const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r);

/// @}

/// \addtogroup has_larger_signed_distance_to_line has_larger_signed_distance_to_line
/// \ingroup kernel_global_function
/// \sa `CGAL::compare_distance_to_point` 
/// \sa `CGAL::compare_signed_distance_to_line` 
/// \sa `CGAL::compare_signed_distance_to_plane` 
/// \sa `CGAL::has_larger_distance_to_point` 
/// \sa `CGAL::has_larger_signed_distance_to_line` 
/// \sa `CGAL::has_larger_signed_distance_to_plane` 
/// \sa `CGAL::has_smaller_distance_to_point` 
/// \sa `CGAL::has_smaller_signed_distance_to_line` 
/// \sa `CGAL::has_smaller_signed_distance_to_plane` 
/// @{

/*!
returns `true` iff the signed distance of `p`
and `l` is larger than the signed distance of 
`q` and `l`.
*/
template <typename Kernel>
bool
has_larger_signed_distance_to_line(const Line_2<Kernel>& l,
const Point_2<Kernel>& p,
const Point_2<Kernel>& q);

/*!
returns `true` iff the signed distance of `r`
and `l` is larger than the signed distance of 
`s` and `l`, where `l` is the directed line
through points `p` and `q`.
*/
template <typename Kernel>
bool
has_larger_signed_distance_to_line(const Point_2<Kernel>& p,
const Point_2<Kernel>& q,
const Point_2<Kernel>& r,
const Point_2<Kernel>& s);

/// @}


/// \addtogroup has_larger_signed_distance_to_plane has_larger_signed_distance_to_plane
/// \ingroup kernel_global_function
/// \sa `CGAL::compare_distance_to_point` 
/// \sa `CGAL::compare_signed_distance_to_line` 
/// \sa `CGAL::compare_signed_distance_to_plane` 
/// \sa `CGAL::has_larger_distance_to_point` 
/// \sa `CGAL::has_larger_signed_distance_to_line` 
/// \sa `CGAL::has_smaller_distance_to_point` 
/// \sa `CGAL::has_smaller_signed_distance_to_line` 
/// \sa `CGAL::has_smaller_signed_distance_to_plane` 
/// @{

/*!
returns `true` iff the signed distance of `p`
and `h` is larger than the signed distance of 
`q` and `h`.
*/
template <typename Kernel>
bool
has_larger_signed_distance_to_plane(const Plane_3<Kernel>& h,
const Point_3<Kernel>& p,
const Point_3<Kernel>& q);

/*!
returns `true` iff the signed distance of `s`
and `h` is larger than the signed distance of 
`t` and `h`, where `h` is the oriented
plane through `p`, `q` and `r`.
*/
template <typename Kernel>
bool
has_larger_signed_distance_to_plane(const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r,
const Point_3<Kernel>& s,
const Point_3<Kernel>& t);

/// @}

/// \addtogroup has_smaller_distance_to_point has_smaller_distance_to_point
/// \ingroup kernel_global_function
/// \sa `CGAL::compare_distance_to_point` 
/// \sa `CGAL::compare_signed_distance_to_line` 
/// \sa `CGAL::compare_signed_distance_to_plane` 
/// \sa `CGAL::has_larger_distance_to_point` 
/// \sa `CGAL::has_larger_signed_distance_to_line` 
/// \sa `CGAL::has_larger_signed_distance_to_plane` 
/// \sa `CGAL::has_smaller_signed_distance_to_line` 
/// \sa `CGAL::has_smaller_signed_distance_to_plane` 
/// @{

/*!
returns `true` iff the distance between `q`
and `p` is smaller than the distance between `r`
and `p`.
*/
template <typename Kernel>
bool
has_smaller_distance_to_point(const Point_2<Kernel>& p,
const Point_2<Kernel>& q,
const Point_2<Kernel>& r);

/*!
returns `true` iff the distance between `q`
and `p` is smaller than the distance between `r`
and `p`.
*/
template <typename Kernel>
bool
has_smaller_distance_to_point(const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r);

/// @}

/// \addtogroup has_smaller_signed_distance_to_line has_smaller_signed_distance_to_line
/// \ingroup kernel_global_function
/// \sa `CGAL::compare_distance_to_point` 
/// \sa `CGAL::compare_signed_distance_to_line` 
/// \sa `CGAL::compare_signed_distance_to_plane` 
/// \sa `CGAL::has_larger_distance_to_point` 
/// \sa `CGAL::has_larger_signed_distance_to_line` 
/// \sa `CGAL::has_larger_signed_distance_to_plane` 
/// \sa `CGAL::has_smaller_distance_to_point` 
/// \sa `CGAL::has_smaller_signed_distance_to_plane` 
/// @{

/*!
returns `true` iff the signed distance of `p`
and `l` is smaller than the signed distance of 
`q` and `l`.
*/
template <typename Kernel>
bool
has_smaller_signed_distance_to_line(const Line_2<Kernel>& l,
const Point_2<Kernel>& p,
const Point_2<Kernel>& q);

/*!
returns `true` iff the signed distance of `r`
and `l` is smaller than the signed distance of 
`s` and `l`, where `l` is the 
oriented line through `p` and `q`.
*/
template <typename Kernel>
bool
has_smaller_signed_distance_to_line(const Point_2<Kernel>& p,
const Point_2<Kernel>& q,
const Point_2<Kernel>& r,
const Point_2<Kernel>& s);

/// @}

/// \addtogroup has_smaller_signed_distance_to_plane has_smaller_signed_distance_to_plane
/// \ingroup kernel_global_function
/// \sa `CGAL::compare_distance_to_point` 
/// \sa `CGAL::compare_signed_distance_to_line` 
/// \sa `CGAL::compare_signed_distance_to_plane` 
/// \sa `CGAL::has_larger_distance_to_point` 
/// \sa `CGAL::has_larger_signed_distance_to_line` 
/// \sa `CGAL::has_larger_signed_distance_to_plane` 
/// \sa `CGAL::has_smaller_distance_to_point` 
/// \sa `CGAL::has_smaller_signed_distance_to_line` 
/// @{

/*!
returns `true` iff the signed distance of `p`
and `h` is smaller than the signed distance of 
`q` and `h`.
*/
template <typename Kernel>
bool
has_smaller_signed_distance_to_plane(const Plane_3<Kernel>& h,
const Point_3<Kernel>& p,
const Point_3<Kernel>& q);

/*!
returns `true` iff the signed distance of `p`
and `h` is smaller than the signed distance of 
`q` and `h`, where `h` is the oriented
plane through `p`, `q` and `r`.
*/
template <typename Kernel>
bool
has_smaller_signed_distance_to_plane(const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r,
const Point_3<Kernel>& s,
const Point_3<Kernel>& t);

/// @}

/// \addtogroup left_turn left_turn
/// \ingroup kernel_global_function

/// \sa `CGAL::collinear` 
/// \sa `CGAL::orientation` 
/// \sa `CGAL::right_turn` 

/// @{

/*!
returns `true` iff `p`, `q`, and `r` form a left turn.
*/
template <typename Kernel>
bool left_turn(const Point_2<Kernel> &p,
const Point_2<Kernel> &q,
const Point_2<Kernel> &r);

/// @}



/// \addtogroup lexicographically_xy_larger lexicographically_xy_larger
/// \ingroup kernel_global_function
/// \sa `CGAL::compare_xy` 
/// \sa `CGAL::lexicographically_xy_larger_or_equal` 
/// \sa `CGAL::lexicographically_xy_smaller` 
/// \sa `CGAL::lexicographically_xy_smaller_or_equal` 
/// @{

/*!
returns `true` iff `p` is lexicographically larger
than `q` with respect to \f$ xy\f$ order.
*/
template <typename Kernel>
bool
lexicographically_xy_larger(const Point_2<Kernel>& p,
const Point_2<Kernel>& q);

/// @}



/// \addtogroup lexicographically_xy_larger_or_equal lexicographically_xy_larger_or_equal
/// \ingroup kernel_global_function

/// \sa `CGAL::compare_xy` 
/// \sa `CGAL::lexicographically_xy_larger` 
/// \sa `CGAL::lexicographically_xy_smaller` 
/// \sa `CGAL::lexicographically_xy_smaller_or_equal` 

/// @{

/*!
returns `true` iff `p` is lexicographically not smaller
than `q` with respect to \f$ xy\f$ order.
*/
template <typename Kernel>
bool
lexicographically_xy_larger_or_equal(const Point_2<Kernel>& p,
const Point_2<Kernel>& q);

/// @}

/// \addtogroup lexicographically_xy_smaller lexicographically_xy_smaller
/// \ingroup kernel_global_function

/// \sa `CGAL::compare_xy` 
/// \sa `CGAL::lexicographically_xy_larger` 
/// \sa `CGAL::lexicographically_xy_larger_or_equal` 
/// \sa `CGAL::lexicographically_xy_smaller_or_equal` 

/// @{

/*!
returns `true` iff `p` is lexicographically smaller
than `q` with respect to \f$ xy\f$ order.
*/
template <typename Kernel>
bool
lexicographically_xy_smaller(const Point_2<Kernel>& p,
const Point_2<Kernel>& q);

/// @}


/// \addtogroup lexicographically_xy_smaller_or_equal lexicographically_xy_smaller_or_equal
/// \ingroup kernel_global_function

/// \sa `CGAL::compare_xy` 
/// \sa `CGAL::lexicographically_xy_larger` 
/// \sa `CGAL::lexicographically_xy_larger_or_equal` 
/// \sa `CGAL::lexicographically_xy_smaller` 

/// @{

/*!
returns `true` iff `p` is lexicographically not larger
than `q` with respect to \f$ xy\f$ order.
*/
template <typename Kernel>
bool 
lexicographically_xy_smaller_or_equal(const Point_2<Kernel>& p,
const Point_2<Kernel>& q);

/// @}

/// \addtogroup lexicographically_xyz_smaller lexicographically_xyz_smaller
/// \ingroup kernel_global_function

/// \sa `CGAL::compare_xyz` 
/// \sa `CGAL::lexicographically_xyz_smaller_or_equal` 

/// @{

/*!
returns `true` iff `p` is lexicographically smaller
than `q` with respect to \f$ xyz\f$ order.
*/
template <typename Kernel>
bool
lexicographically_xyz_smaller(const Point_3<Kernel>& p,
const Point_3<Kernel>& q);

/// @}

/// \addtogroup lexicographically_xyz_smaller_or_equal lexicographically_xyz_smaller_or_equal
/// \ingroup kernel_global_function

/// \sa `CGAL::compare_xyz` 
/// \sa `CGAL::lexicographically_xyz_smaller` 

/// @{

/*!
returns `true` iff `p` is lexicographically not larger
than `q` with respect to \f$ xyz\f$ order.
*/
template <typename Kernel>
bool 
lexicographically_xyz_smaller_or_equal(const Point_3<Kernel>& p,
const Point_3<Kernel>& q);

/// @}

/// \addtogroup max_vertex max_vertex
/// \ingroup kernel_global_function
/// @{

/*!
computes the vertex with the lexicographically largest coordinates of the iso rectangle `ir`.
*/
template <typename Kernel>
Point_2<Kernel> max_vertex( const Iso_box_2<Kernel>& ir );

/*!
computes the vertex with the lexicographically largest coordinates of the iso cuboid `ic`.
*/
template <typename Kernel>
Point_3<Kernel> max_vertex( const Iso_cuboid_3<Kernel>& ic );

/// @}

/// \addtogroup midpoint midpoint
/// \ingroup kernel_global_function
/// @{

/*!
computes the midpoint of the segment \f$ pq\f$.
*/
template <typename Kernel>
Point_2<Kernel> midpoint( const Point_2<Kernel>& p,
const Point_2<Kernel>& q );

/*!
computes the midpoint of the segment \f$ pq\f$.
*/
template <typename Kernel>
Point_3<Kernel> midpoint( const Point_3<Kernel>& p, const Point_3<Kernel>& q );

/// @}

/// \addtogroup min_vertex min_vertex
/// \ingroup kernel_global_function
/// @{

/*!
computes the vertex with the lexicographically smallest coordinates of the iso rectangle `ir`.
*/
template <typename Kernel>
Point_2<Kernel> min_vertex( const Iso_box_2<Kernel>& ir );

/*!
computes the vertex with the lexicographically smallest coordinates of the iso cuboid `ic`.
*/
template <typename Kernel>
Point_3<Kernel> min_vertex( const Iso_cuboid_3<Kernel>& ic );

/// @}

/// \addtogroup normal normal
/// \ingroup kernel_global_function
/// @{

/*!
computes the normal vector for the vectors `q-p` and `r-p`.
\pre The points `p`, `q`, and `r` must not be collinear.
*/
template <typename Kernel>
Vector_3<Kernel> normal( const Point_3<Kernel>& p, const Point_3<Kernel>& q, const Point_3<Kernel>& r );

/// @}

/// \addtogroup orientation orientation
/// \ingroup kernel_global_function

/// \sa `CGAL::collinear` 
/// \sa `CGAL::left_turn` 
/// \sa `CGAL::right_turn` 

/// @{

/*!
returns `LEFT_TURN`, if \f$ r\f$ lies to the left of the oriented 
line \f$ l\f$ defined by \f$ p\f$ and \f$ q\f$, returns `RIGHT_TURN` if \f$ r\f$ 
lies to the right of \f$ l\f$, and returns `COLLINEAR` if \f$ r\f$ lies
on \f$ l\f$.
*/
template <typename Kernel>
Orientation orientation(const Point_2<Kernel>& p,
const Point_2<Kernel>& q,
const Point_2<Kernel>& r);

/*!
returns `LEFT_TURN` if \f$ u\f$ and \f$ v\f$ form a left turn,
returns `RIGHT_TURN` if \f$ u\f$ and \f$ v\f$ form a right turn,
and returns `COLLINEAR` if \f$ u\f$ and \f$ v\f$ are collinear.
*/
template <typename Kernel>
Orientation orientation(const Vector_2<Kernel>& u,
const Vector_2<Kernel>& v);

/*!
returns `POSITIVE`, if \f$ s\f$ lies on the positive side of the oriented 
plane \f$ h\f$ defined by \f$ p\f$, \f$ q\f$, and \f$ r\f$, returns `NEGATIVE` if \f$ s\f$ 
lies on the negative side of \f$ h\f$, and returns `COPLANAR` if \f$ s\f$ lies
on \f$ h\f$.
*/
template <typename Kernel>
Orientation orientation(const Point_3<Kernel> &p,
const Point_3<Kernel>&q,
const Point_3<Kernel>&r,
const Point_3<Kernel>&s);

/*!
returns `NEGATIVE` if \f$ u\f$, \f$ v\f$ and \f$ w\f$ are negatively oriented,
and returns `COPLANAR` if \f$ u\f$, \f$ v\f$ and \f$ w\f$ are coplanar.
*/
template <typename Kernel>
Orientation orientation(const Vector_3<Kernel> &u,
const Vector_3<Kernel> &v,
const Vector_3<Kernel> &w);

/// @}



/// \addtogroup orthogonal_vector orthogonal_vector
/// \ingroup kernel_global_function

/// @{

/*!
computes an orthogonal vector of the plane `p`, which is directed to 
the positive side of this plane.
*/
template <typename Kernel>
Vector_3<Kernel> orthogonal_vector( const Plane_3<Kernel>& p);

/*!
computes an orthogonal vector of the plane defined by `p`, `q` and `r`,
which is directed to the positive side of this plane.
*/
template <typename Kernel>
Vector_3<Kernel> orthogonal_vector( const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r );

/// @}


/// \addtogroup parallel parallel
/// \ingroup kernel_global_function

/// @{

/*!
returns `true`, if `l1` and `l2` are parallel or if one
of those (or both) is degenerate.
*/
template <typename Kernel>
bool parallel(const Line_2<Kernel>& l1,
const Line_2<Kernel>& l2);

/*!
returns `true`, if `r1` and `r2` are parallel or if one
of those (or both) is degenerate.
*/
template <typename Kernel>
bool parallel(const Ray_2<Kernel>& r1,
const Ray_2<Kernel>& r2);

/*!
returns `true`, if `s1` and `s2` are parallel or if one
of those (or both) is degenerate.
*/
template <typename Kernel>
bool parallel(const Segment_2<Kernel>& s1,
const Segment_2<Kernel>& s2);

/*!
returns `true`, if `l1` and `l2` are parallel or if one
of those (or both) is degenerate.
*/
template <typename Kernel>
bool parallel(const Line_3<Kernel>& l1,
const Line_3<Kernel>& l2);

/*!
returns `true`, if `h1` and `h2` are parallel or if one
of those (or both) is degenerate.
*/
template <typename Kernel>
bool parallel(const Plane_3<Kernel>& h1,
const Plane_3<Kernel>& h2);

/*!
returns `true`, if `r1` and `r2` are parallel or if one
of those (or both) is degenerate.
*/
template <typename Kernel>
bool parallel(const Ray_3<Kernel>& r1,
const Ray_3<Kernel>& r2);

/*!
returns `true`, if `s1` and `s2` are parallel or if one
of those (or both) is degenerate.
*/
template <typename Kernel>
bool parallel(const Segment_3<Kernel>& s1,
const Segment_3<Kernel>& s2);

/// @}



/// \addtogroup radical_line radical_line
/// \ingroup kernel_global_function

/// @{

/*!
returns the radical line of the two circles. 
\pre \f$ c1\f$ and \f$ c2\f$ are not cocentric.
*/
template <typename Kernel>
Line_2<Kernel> radical_line(const Circle_2<Kernel>& c1,
const Circle_2<Kernel>& c2);

/// @}



/// \addtogroup right_turn right_turn
/// \ingroup kernel_global_function

/// \sa `CGAL::collinear` 
/// \sa `CGAL::left_turn` 
/// \sa `CGAL::orientation` 

/// @{

/*!
returns `true` iff `p`, `q`, and `r` form a right turn.
*/
template <typename Kernel>
bool right_turn(const Point_2<Kernel> &p,
const Point_2<Kernel> &q,
const Point_2<Kernel> &r);

/// @}


/// \addtogroup side_of_bounded_circle side_of_bounded_circle
/// \ingroup kernel_global_function

/// \sa `CGAL::coplanar_side_of_bounded_circle` 
/// \sa `CGAL::side_of_oriented_circle` 

/// @{

/*!
returns the relative position of point `t`
to the circle defined by \f$ p\f$, \f$ q\f$ and \f$ r\f$. The order
of the points \f$ p\f$, \f$ q\f$ and \f$ r\f$ does not matter.
\pre `p, q` and `r` are not collinear.
*/
template <typename Kernel>
Bounded_side side_of_bounded_circle(
const Point_2<Kernel> &p, 
const Point_2<Kernel> &q,
const Point_2<Kernel> &r, 
const Point_2<Kernel> &t);

/*!
returns the position of the point `t` relative to the circle
that has \f$ pq\f$ as its diameter.
*/
template <typename Kernel>
Bounded_side side_of_bounded_circle(
const Point_2<Kernel> &p, 
const Point_2<Kernel> &q,
const Point_2<Kernel> &t);

/// @}



/// \addtogroup side_of_bounded_sphere side_of_bounded_sphere
/// \ingroup kernel_global_function

/// \sa `CGAL::side_of_oriented_sphere` 

/// @{

/*!
returns the relative position of point `t`
to the sphere defined by \f$ p\f$, \f$ q\f$, \f$ r\f$, and \f$ s\f$. The order
of the points \f$ p\f$, \f$ q\f$, \f$ r\f$, and \f$ s\f$ does not matter.
\pre `p, q, r` and `s` are not coplanar.
*/
template <typename Kernel>
Bounded_side side_of_bounded_sphere(
const Point_3<Kernel> &p, 
const Point_3<Kernel> &q,
const Point_3<Kernel> &r, 
const Point_3<Kernel> &s, 
const Point_3<Kernel> &t);

/*!
returns the position of the point `t` relative to the sphere
passing through \f$ p\f$, \f$ q\f$, and \f$ r\f$ and whose center is in the plane defined
by these three points.
*/
template <typename Kernel>
Bounded_side side_of_bounded_sphere(
const Point_3<Kernel> &p, 
const Point_3<Kernel> &q,
const Point_3<Kernel> &r, 
const Point_3<Kernel> &t);

/*!
returns the position of the point `t` relative to the sphere
that has \f$ pq\f$ as its diameter.
*/
template <typename Kernel>
Bounded_side side_of_bounded_sphere(
const Point_3<Kernel> &p, 
const Point_3<Kernel> &q,
const Point_3<Kernel> &t);

/// @}

/// \addtogroup side_of_oriented_circle side_of_oriented_circle
/// \ingroup kernel_global_function

/// \sa `CGAL::side_of_bounded_circle` 

/// @{

/*!
returns the relative position of point `test`
to the oriented circle defined by \f$ p\f$, \f$ q\f$ and \f$ r\f$.
The order of the points \f$ p\f$, \f$ q\f$ and \f$ r\f$ is important,
since it determines the orientation of the implicitly
constructed circle.

If \f$ p\f$, \f$ q\f$ and \f$ r\f$ are collinear, the circle degenerates in a line.
`ON_ORIENTED_BOUNDARY` is returned if \f$ test\f$ is also collinear or if two
points are identical, 
otherwise, `side_of_oriented_circle(r, q, test, p)` is returned.

*/
template <typename Kernel>
Oriented_side side_of_oriented_circle(
const Point_2<Kernel> &p, 
const Point_2<Kernel> &q,
const Point_2<Kernel> &r, 
const Point_2<Kernel> &test);

/// @}



/// \addtogroup side_of_oriented_sphere side_of_oriented_sphere
/// \ingroup kernel_global_function

/// \sa `CGAL::side_of_bounded_sphere` 

/// @{

/*!
returns the relative position of point \f$ test\f$ to the oriented sphere defined
by \f$ p\f$, \f$ q\f$, \f$ r\f$ and \f$ s\f$. The order of the points \f$ p\f$, \f$ q\f$, \f$ r\f$, and \f$ s\f$ is important,
since it determines the orientation of the implicitly constructed
sphere. If the points \f$ p\f$, \f$ q\f$, \f$ r\f$ and \f$ s\f$ are positive oriented, positive side
is the bounded interior of the sphere.

In case of degeneracies, `ON_ORIENTED_BOUNDARY` is returned
if all points are coplanar. Otherwise, there is a cyclic permutation of the five points
that puts four non coplanar points first, it is used to answer the predicate:
e.g. `side_of_oriented_sphere(q, r, s, test, p)` is returned if \f$ q\f$, \f$ r\f$, \f$ s\f$,
and \f$ test\f$ are non coplanar. 
*/
template <typename Kernel>
Oriented_side side_of_oriented_sphere(
const Point_3<Kernel> &p, 
const Point_3<Kernel> &q,
const Point_3<Kernel> &r, 
const Point_3<Kernel> &s, 
const Point_3<Kernel> &test);

/// @}

/// \addtogroup squared_area squared_area
/// \ingroup kernel_global_function

/// @{

/*!
returns the squared area of the triangle defined by the points \f$ p\f$,
\f$ q\f$ and \f$ r\f$. 
*/
template <typename Kernel>
Kernel::FT squared_area(const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r);

/// @}

/// \addtogroup squared_radius squared_radius
/// \ingroup kernel_global_function

/// \sa `CGAL::Circle_2<Kernel>` 
/// \sa `CGAL::Circle_3<Kernel>` 
/// \sa `CGAL::Sphere_3<Kernel>` 

/// @{

/*!
compute the squared radius of the circle passing through the points
\f$ p\f$, \f$ q\f$, and \f$ r\f$. \pre \f$ p\f$, \f$ q\f$, and \f$ r\f$ are not collinear.
*/
template <typename Kernel>
FT
squared_radius( const Point_2<Kernel>& p,
const Point_2<Kernel>& q,
const Point_2<Kernel>& r);

/*!
compute the squared radius of the smallest circle passing through \f$ p\f$,
and \f$ q\f$, i.e. one fourth of the squared distance between \f$ p\f$ and \f$ q\f$.
*/
template <typename Kernel>
FT
squared_radius( const Point_2<Kernel>& p,
const Point_2<Kernel>& q);

/*!
compute the squared radius of the smallest circle passing through \f$ p\f$, 
i.e. \f$ 0\f$.
*/
template <typename Kernel>
FT
squared_radius( const Point_2<Kernel>& p);

/*!
compute the squared radius of the sphere passing through the points \f$ p\f$,
\f$ q\f$, \f$ r\f$ and \f$ s\f$. \pre \f$ p\f$, \f$ q\f$, \f$ r\f$ and \f$ s\f$ are not coplanar.
*/
template <typename Kernel>
FT
squared_radius( const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r,
const Point_3<Kernel>& s);

/*!
compute the squared radius of the sphere passing through the points \f$ p\f$,
\f$ q\f$, and \f$ r\f$ and whose center is in the same plane as those three points.
*/
template <typename Kernel>
FT
squared_radius( const Point_3<Kernel>& p,
const Point_3<Kernel>& q,
const Point_3<Kernel>& r);

/*!
compute the squared radius of the smallest circle passing through \f$ p\f$,
and \f$ q\f$, i.e. one fourth of the squared distance between \f$ p\f$ and \f$ q\f$.
*/
template <typename Kernel>
FT
squared_radius( const Point_3<Kernel>& p,
const Point_3<Kernel>& q);

/*!
compute the squared radius of the smallest circle passing through \f$ p\f$, 
i.e. \f$ 0\f$.
*/
template <typename Kernel>
FT
squared_radius( const Point_3<Kernel>& p);

/// @}


/// \addtogroup volume volume
/// \ingroup kernel_global_function

/// \sa `CGAL::Tetrahedron_3<Kernel>` 

/// @{

/*!
Computes the signed volume of the tetrahedron defined by the four points
`p0`, `p1`, `p2` and `p3`.
*/

template <typename Kernel>
Kernel::FT volume(const Point_3<Kernel> & p0, const Point_3<Kernel> & p1,
                   const Point_3<Kernel> & p2, const Point_3<Kernel> & p3);

/// @}


/// \addtogroup x_equal x_equal
/// \ingroup kernel_global_function

/// \sa `CGAL::compare_x` 
/// \sa `CGAL::y_equal` 
/// \sa `CGAL::z_equal` 

/// @{

/*!
returns `true`, iff `p` and `q`
have the same `x`-coordinate.
*/
template <typename Kernel>
bool x_equal(const Point_2<Kernel> &p,
const Point_2<Kernel> &q);

/*!
returns `true`, iff `p` and `q`
have the same `x`-coordinate.
*/
template <typename Kernel>
bool x_equal(const Point_3<Kernel> &p,
const Point_3<Kernel> &q);

/// @}



/// \addtogroup y_equal y_equal
/// \ingroup kernel_global_function

/// \sa `CGAL::compare_y` 
/// \sa `CGAL::x_equal` 
/// \sa `CGAL::z_equal` 

/// @{

/*!
returns `true`, iff `p` and `q`
have the same `y`-coordinate.
*/
template <typename Kernel>
bool y_equal(const Point_2<Kernel> &p,
const Point_2<Kernel> &q);

/*!
returns `true`, iff `p` and `q`
have the same `y`-coordinate.
*/
template <typename Kernel>
bool y_equal(const Point_3<Kernel> &p,
const Point_3<Kernel> &q);

/// @}


/// \addtogroup z_equal z_equal
/// \ingroup kernel_global_function

/// \sa `CGAL::compare_z` 
/// \sa `CGAL::x_equal` 
/// \sa `CGAL::y_equal` 

/// @{

/*!
returns `true`, iff `p` and `q`
have the same `z`-coordinate.
*/
template <typename Kernel>
bool z_equal(const Point_3<Kernel> &p,
const Point_3<Kernel> &q);

/// @}


} /* namespace CGAL */

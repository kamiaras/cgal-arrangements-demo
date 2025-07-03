#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/point_generators_2.h>
#include <CGAL/convex_hull_2.h>
#include <vector>
#include <iostream>

int main(){
  using K = CGAL::Exact_predicates_inexact_constructions_kernel;
  using P = K::Point_2;

  std::vector<P> pts, hull;
  CGAL::Random_points_in_square_2<P> gen(1.0);
  CGAL::cpp11::copy_n(gen, 20, std::back_inserter(pts));

  CGAL::convex_hull_2(pts.begin(), pts.end(), std::back_inserter(hull));
  for (auto& p : hull) {
    std::cout << p.x() << " " << p.y() << "\n";
  }
  return 0;
}

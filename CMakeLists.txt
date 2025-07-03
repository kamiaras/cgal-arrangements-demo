cmake_minimum_required(VERSION 3.10)
project(cgal_arrangements)

# Find CGAL (installed via apt)
find_package(CGAL REQUIRED COMPONENTS Core)

add_executable(random_convex random_convex.cpp)
target_link_libraries(random_convex PRIVATE CGAL::CGAL)

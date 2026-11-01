# CGAL convex hull demo

A small C++ program that generates 20 random points in a square and prints the vertices of their convex hull. It uses CGAL's `Exact_predicates_inexact_constructions_kernel` and `convex_hull_2`.

## Build and run

Install a C++17 compiler, CMake 3.22 or newer, and CGAL with its Core component and dependencies. These requirements follow [CGAL 6.2's dependency guide](https://doc.cgal.org/6.2/Manual/thirdparty.html). See the [CGAL installation guide](https://doc.cgal.org/6.2/Manual/usage.html) for package-manager instructions. Make CGAL's package configuration visible to CMake.

```sh
cmake -S . -B build
cmake --build build
./build/random_convex
```

For a multi-configuration generator on Windows, the executable may be under `build/Debug/` or `build/Release/`. If CMake cannot find CGAL, pass `-DCGAL_DIR=/path/to/CGAL` pointing to the directory containing `CGALConfig.cmake`.

Output is one `x y` coordinate pair per hull vertex. To save a run:

```sh
./build/random_convex > hull_run.txt
```

[`hull_pts.txt`](hull_pts.txt) is saved example output. The command above writes a separate local result. A new random sample can produce different vertices. The program does not draw the hull or accept input files.

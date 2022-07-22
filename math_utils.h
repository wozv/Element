
#include "D:\MY DRIVE\PROJECT\New_ray\Ray.h"
#include "D:\MY DRIVE\PROJECT\Ray_tracer\Vec.h"

#include <cmath>
#include <limits>
#include <memory>
#include <random>



// Usings

using std::shared_ptr;
using std::make_shared;
using std::sqrt;

// Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

inline double clamp(double x, double mn, double mx) {
    if (x < mn) return mn;
    if (x > mx) return mx;
    return x;
}


#include <cstdlib>


inline double random_double() {
    // Returns a random real in [0,1).
    return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
    // Returns a random real in [min,max).
    return min + (max-min)*random_double();
}
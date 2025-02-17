#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class ray {
    public:
        // Empty ray object?
        ray() {} 
        // Initialize a ray object
        ray(const point3& origin, const vec3& direction) : orig(origin), dir(direction) {}
        // Return origin private variable
        const point3& origin() const {return orig;}
        // Return direction private variable
        const vec3& direction() const {return dir;}
        // Some kind of scalar multiple thing. Find position of vector at time t?
        point3 at(double t) const{
            return orig + t*dir;
        }
    private:
        point3 orig;
        vec3 dir;
};
#endif
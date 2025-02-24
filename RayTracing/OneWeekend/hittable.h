#ifndef HITTABLE_H
#define HITTABLE_H
#include "ray.h"

/* The general idea of this class is to contain 
all the things a ray might hit. It takes in a ray, 
gives it an interval and records matches in that 
interval
*/

class hit_record {
    public:
        point3 p;
        vec3 normal;
        double t;
};
class hittable {
    public:
        virtual ~hittable() = default;

        virtual bool hit(const ray& r, double ray_tmin, double ray_tmax, hit_record& rec) const = 0;
};

#endif
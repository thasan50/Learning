#ifndef SPHERE_H
#define SPHERE_H

#include "hittable.h"
#include "vec3.h"

//What does this do?
class sphere : public hittable {
    public:
        sphere(const point3& center, double radius) : center(center), radius(fmax(0, radius)) {}
        bool hit(const ray& r, double ray_tmin, double ray_tmax, hit_record& rec) const override {
            vec3 oc = center - r.origin();
            auto a = r.direction().length_squared();
            auto h = dot(r.direction(), oc);
            auto c = oc.length_squared() - radius*radius;
            auto discriminant = h*h - a*c;
            if (discriminant < 0) {
                return false;
            }
            auto sqrtd = sqrt(discriminant);

            

            return true;
        }
    private:
        point3 center;
        double radius;
};
#endif
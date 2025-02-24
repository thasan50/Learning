#include "color.h"
#include "ray.h"
#include "vec3.h"

#include <iostream>
// #include <thread>
// #include <chrono>
using namespace std;

double hit_sphere(const point3& center, double radius, const ray& r) {
    // Basically, you have the quadratic equation to check if a ray intersects the sphere or its surface
    // Simplified sphere intersection code: h = b/(-2)
    vec3 oc = center - r.origin();
    auto a = r.direction().length_squared();
    auto h = dot(r.direction(), oc);
    auto c = oc.length_squared() - radius*radius;
    auto discriminant = h*h - a*c;

    if (discriminant < 0) {
        return -1.0;
    }
    else {
        return (h - sqrt(discriminant)) / (a);
    }
}

color ray_color(const ray& r) {
    // Color for where the ray is passing through
    auto t = hit_sphere(point3(0,0,-1.8), 0.9, r);
    // Different gradient if passing through sphere
    if (t > 0.0) {
        vec3 N = unit_vector(r.at(t) - vec3(0,0,-1)); // Vector formed from direction of camera minus center of sphere
        return 0.5*color(N.x()+1, N.y()+1, N.z()+1); // Why is it plus 1?
    }

    vec3 unit_direction = unit_vector(r.direction());
    auto a = 0.5*(unit_direction.y() + 1.0);
    return (1.0-a)*color(1.0,0.0,0.0) + a*color(0.5, 0.7, 1.0);
}

int main() {
    //Image
    auto aspect_ratio = 16.0 / 9.0;
    int img_width = 400;

    //Calculate img height, ensure it's greater than 1
    int img_height = int(img_width / aspect_ratio);
    img_height = (img_height < 1) ? 1 : img_height;

    //Camera
    auto focal_length = 1.0;
    auto viewport_height = 2.0;
    //We use the second factor instead of aspect_ratio because there are two cases where it changes
    //When rounding to integer, or when img_height < 1
    auto viewport_width = viewport_height * (double(img_width)/img_height);
    auto camera_center = point3(0,0,0);

    // Calculate vectors along horizontal and vertical viewport edges
    auto viewport_u = vec3(viewport_width, 0, 0);
    auto viewport_v = vec3(0, -viewport_height, 0); //Vertical axis was inverted

    //Calculate horizontal and vertical delta vectors from pixel to pixel
    auto pixel_delta_u = viewport_u / img_width;
    auto pixel_delta_v = viewport_v / img_height;

    //Calculate location of upper left pixel, this basically decides where the margins go
    auto viewport_upper_left = camera_center - vec3(0,0,focal_length) - viewport_u/2 - viewport_v/2;
    //^ There are three vectors subtracted from point (0,0,0), but each vector only moves 
    // along one axis so it's basically just subtracting one vector with three values
    auto pixel00_loc = viewport_upper_left + 0.5 * (pixel_delta_u + pixel_delta_v);

    //Render
    cout << "P3\n" << img_width << " " << img_height << "\n255\n";

    for (int j = 0; j < img_height; j++) {
        clog << "\rScanlines remaining: " << (img_height - j) << " " << flush;
        for (int i = 0; i < img_width; i++) {
            auto pixel_center = pixel00_loc + (i * pixel_delta_u) + (j * pixel_delta_v);
            auto ray_direction = pixel_center - camera_center;
            ray r(camera_center, ray_direction);

            color pixel_color = ray_color(r);
            write_color(cout, pixel_color);
        }
        // this_thread::sleep_for(chrono::milliseconds(10));
    }
    clog << "\rDone                                  \n";


    return 0;
}
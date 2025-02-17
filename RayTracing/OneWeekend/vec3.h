#ifndef VEC3_H
#define VEC3_H
#include <cmath>
#include <iostream>
using namespace std;

class vec3 {
    public:
        //Array to take in input
        double e[3];
        //If created without input, default 0
        vec3() : e{0,0,0} {} 
        //If created with input, fill in the corresponding fields
        vec3(double e0, double e1, double e2) : e{e0, e1, e2} {}

        //Calling these functions to access x,y,z values of a vector
        //vec3 v(e0, e1, e2); -> cout << v.x() << v.y() << v.z() << endl
        double x() const {return e[0];}
        double y() const {return e[1];}
        double z() const {return e[2];}

        //Negates the values of a vec3 object
        vec3 operator-() const {return vec3(-e[0], -e[1], -e[2]);}
        //Lets you read value at an index
        double operator[](int i) const {return e[i];}
        //Allows you to set the value at an index
        double& operator[](int i) {return e[i];}

        //Vector and vector addition
        vec3& operator+=(const vec3& v) {
            e[0] += v.e[0];
            e[1] += v.e[1];
            e[2] += v.e[2];
            return *this;
        }
        //Vector by constant multiplication
        vec3& operator*=(double t) {
            e[0] += t;
            e[1] *= t;
            e[2] *= t;
            return *this;
        }
        //Vector by constant division
        vec3& operator/=(double t) {
            return *this *= 1/t;
        }
        //Vector length calculation
        double length() const {
            return sqrt(length_squared());
        }
        double length_squared() const {
            return e[0]*e[0] + e[1]*e[1] + e[2]*e[2];
        }
};

// Point3 is an alias for vec3, different names for different intended uses
using point3 = vec3;

// Vector utility functions
inline ostream& operator<<(ostream& out, const vec3& v) {
    return out << v.e[0] << " " << v.e[1] << " " << v.e[2];
}

inline vec3 operator+(const vec3& u, const vec3& v) {
    return vec3(u.e[0] + v.e[0], u.e[1] + v.e[1], u.e[2] + v.e[2]);
}
inline vec3 operator-(const vec3& u, const vec3& v) {
    return vec3(u.e[0] - v.e[0], u.e[1] - v.e[1], u.e[2] - v.e[2]);
}
inline vec3 operator*(const vec3& u, const vec3& v) {
    return vec3(u.e[0] * v.e[0], u.e[1] * v.e[1], u.e[2] * v.e[2]);
}
inline vec3 operator*(double t, const vec3& v) {
    return vec3(t*v.e[0], t*v.e[1], t*v.e[2]);
}
inline vec3 operator*(const vec3& v, double t) {
    return t*v;
}
inline vec3 operator/(const vec3& v, double t) {
    return (1/t)*v;
}
//Dot product
inline double dot(const vec3& u, const vec3& v) {
    return 
    u.e[0] * v.e[0] + 
    u.e[1] * v.e[1] + 
    u.e[2] * v.e[2];
}
//Cross product
inline vec3 cross(const vec3& u, const vec3& v) {
    return vec3(
        u.e[1]*v.e[2] - u.e[2]*v.e[1], 
        u.e[2]*v.e[0] - u.e[0]*v.e[2],
        u.e[0]*v.e[1] - u.e[1]*v.e[0]
    );
}
inline vec3 unit_vector(const vec3& v) {
    return v / v.length();
}
#endif
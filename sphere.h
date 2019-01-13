/*
 * sphere.h
 * Copyright (C) 2019 Marc Kirchner
 *
 * Distributed under terms of the MIT license.
 */

#ifndef SPHERE_H
#define SPHERE_H

#include "object.h"
#include "ray.h"
#include "vec3.h"

class Sphere : public Object {
    public:
        Sphere(const Vec3& center, float radius)
            : center_(center), radius_(radius) {}
        virtual ~Sphere() {}
        virtual bool testHit(const Ray& r, float tMin, float tMax, float* t);
        virtual Hit getHit(const Ray& r, float t);

    private:
        Vec3 center_;
        float radius_;
};

#endif /* !SPHERE_H */

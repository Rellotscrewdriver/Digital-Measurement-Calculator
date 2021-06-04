#ifndef SHAPE_3D_H
#define SHAPE_3D_H

#include "../declarations.h"

class Shape_3D : public declarations{
    public:
        Shape_3D();

};
    /*
        SA = Surface Area
        TSA = Total Surface Area
        LSA = Lateral Surface Area
        CSA = Curved surface Area
        V = Volume
    */

class Cube : public declarations{
public:
        Cube();
        void SACube();
        void VCube();
};

class Cuboid : public declarations{
public:
        Cuboid();
        void SACuboid();
        void VCuboid();
};

class Hemisphere : public declarations{
public:
        Hemisphere();
        void CSAHemisphere();
        void TSAHemisphere();
        void VHemisphere();
};

class Sphere : public Hemisphere{
public:
        Sphere();
        void SASphere();
        void VSphere();
};


class Cone : public declarations{
public:
        Cone();
        void CSACone();
        void TSACone();
        void VCone();
};

class Cylinder : public declarations{
public:
        Cylinder();
        void CSACylinder();
        void TSACylinder();
        void VCylinder();
};



#endif

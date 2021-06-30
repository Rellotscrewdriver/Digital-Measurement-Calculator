#ifndef SHAPE_3D_H
#define SHAPE_3D_H

#include "../declarations.h"
#include "../exception_handling.h"

class Shape_3D : public declarations{
public:
    Shape_3D();
    Exception_Handling Exh;
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
    Exception_Handling Exh;
};

class Cuboid : public declarations{
public:
    Cuboid();
    void SACuboid();
    void VCuboid();
    Exception_Handling Exh;
};

class Hemisphere : public declarations{
public:
    Hemisphere();
    void CSAHemisphere();
    void TSAHemisphere();
    Exception_Handling Exh;
    void VHemisphere();
};

class Sphere : public Hemisphere{
public:
    Sphere();
    void SASphere();
    void VSphere();
    Exception_Handling Exh;
};

class Cone : public declarations{
public:
    Cone();
    void CSACone();
    void TSACone();
    void VCone();
    Exception_Handling Exh;
};

class Cylinder : public declarations{
public:
    Cylinder();
    void CSACylinder();
    void TSACylinder();
    void VCylinder();
    Exception_Handling Exh;
};



#endif

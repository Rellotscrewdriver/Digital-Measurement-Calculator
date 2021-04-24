#ifndef SHAPE_3D_H
#define SHAPE_3D_H
#include "Shape_2D.h"

class Shape_3D
{
    public:
        Shape_3D();
        virtual ~Shape_3D();

        int WhichShape;
        //^ this variable asks for input
    protected:
        int side;
        int height;
        int slant_height;
        int width;
        int length;
        const double pi = 3.14;
        int radius;

        string Text_radius = "radius: ";
        string Text_width = "width: ";
        string Text_length = "length: ";
        string Text_height = "height: ";

    private:

        /*
            SA = Surface Area
            TSA = Total Surface Area
            LSA = Lateral Surface Area
            CSA = Curved surface Area
            V = Volume
        */
        void Cube();
        void SACube();
        void VCube();

        void Cuboid();
        void SACuboid();
        void VCuboid();

        void Sphere();
        void SASphere();
        void VSphere();

        void Hemisphere();
        void CSAHemisphere();
        void TSAHemisphere();
        void VHemisphere();

        void Cone();
        void CSACone();
        void TSACone();
        void VCone();

        void Cylinder();
        void CSACylinder();
        void TSACylinder();
        void VCylinder();
};

#endif // SHAPE_3D_H

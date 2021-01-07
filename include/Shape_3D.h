#ifndef SHAPE_3D_H
#define SHAPE_3D_H


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
        int width;
        int length;


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

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

    private:
        void Cube();
        void Cuboid();
        void Sphere();
        void Cone();
        void Cylinder();
        void Hemisphere();
};

#endif // SHAPE_3D_H

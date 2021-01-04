#ifndef SHAPE_2D_H
#define SHAPE_2D_H

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Shape_2D
{
    public:
        Shape_2D();
        virtual ~Shape_2D();

        int WhichShape;
        //^ this variable asks for input
    protected:
        int length;
        int width;
        int height;
        int side;
        float Pi = 3.14;
        int pi = 22/7;
        int Radius;
        int Diameter = Radius/2;
        int base1;
        int base2;
        int half = 0.5;
    private:
        //Global
        void Square();
        void Rectangle();
        void Parallelogram();
        void Circle();
        void Quadrilateral();
        void Trapezium();

        //Here A = area
        void Asquare();
        void ARectangle();
        void AParallelogram();
        void ACircle();
        void AQuadrilateral();
        void ATrapezium();

        //Here P = perimeter
        void Psquare();
        void PRectangle();
        void PParallelogram();
        void PCircle();
        void PQuadrilateral();
        void PTrapezium();
};

#endif // SHAPE_2D_H

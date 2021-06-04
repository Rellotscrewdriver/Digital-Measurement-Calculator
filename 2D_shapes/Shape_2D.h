#ifndef SHAPE_2D_H
#define SHAPE_2D_H

#include "../declarations.h"

class Shape_2D : public declarations{
    public:
        Shape_2D();
};

class Square : public declarations{
public:

    Square();
    void Asquare();
    void Psquare();
};

class Rectangle : public declarations{
public:

    Rectangle();
    void ARectangle();
    void PRectangle();

};

class Parallelogram : public declarations{
public:

    Parallelogram();
    void AParallelogram();
    void PParallelogram();
};

class Circle : public declarations{
public:

    Circle();
    void ACircle();
    void PCircle();
};

class Quadrilateral : public declarations{
public:

    Quadrilateral();
    void PQuadrilateral();
    void AQuadrilateral();
};

class Trapezium : public declarations{
public:

    Trapezium();
    void ATrapezium();
    void PTrapezium();
};


#endif // SHAPE_2D_H

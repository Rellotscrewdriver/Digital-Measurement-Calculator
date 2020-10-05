#ifndef AREA_2D_H
#define AREA_2D_H
#include <iostream>
#include <string>

class area_2D
{
    public:
        area_2D();
        virtual ~area_2D();

        int length;
        int width;
        int sides;
        int oneSide;
        int radius;
    protected:

    private:

        void rectangle();
        void circle();
        void parallelogram();
        void square();
        void triangle();
};

#endif // AREA_2D_H

#ifndef PERIMETER_2D_H
#define PERIMETER_2D_H


class perimeter_2D
{
    public:
        perimeter_2D();
        virtual ~perimeter_2D();
		int whichShape;

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

#endif // PERIMETER_2D_H
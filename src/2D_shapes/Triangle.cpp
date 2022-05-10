#include "../Include/Shape_2D.h"
#include "../Include/Handle_Exception.h"
#include <cmath>

/*
1. Area:
0.5 * base * height

2. area of equilateral triangle:
(half-3)/4 * side * side

3. area of isosceles triangle:
1/4 b half-(4a * a - b * b)

4. heron's formula:
s = (a + b + c) / 2
A =  half-(s(s-a) (s-b) (s-c))

5. Perimeter:
a + b + c
*/

void Triangle::filter_area_of_triangle(){
    Display dis;
    Parameter para;
    int Me_t;
    dis.measurement_type_triangle_text();
    cin >> Me_t;

    if(Me_t <= 4){
        para.Special_Triangle(Me_t);
    } else if(Me_t == 5){
        Shape_2D();
    } else if(Me_t == 6){
        getchar();
    } else {
        Handle_Exception H_Exp;
        H_Exp.check_if_user_entered_string_or_invaild_number();
        filter_area_of_triangle();
    }
}

double Triangle::ATriangle(double base, double height){
    return 0.5 * base * height;
}

double Triangle::AofETriangle(double Side){
    return (sqrt(3) / 4) * Side * Side;
}

double Triangle::AofITriangle(double SideA, double SideB){
    return (1 / 4) * SideB * sqrt((4 * SideA * SideA - SideB * SideB));
}

double Triangle::AHFTriangle(double SideA, double SideB, double SideC){
    side_perimeter = (SideA + SideB + SideC) / 2;
    return sqrt(side_perimeter  * (side_perimeter - SideA) * (side_perimeter - SideB) * (side_perimeter - SideC));
}

double Triangle::PTriangle(double SideA, double SideB, double SideC){
    return SideA + SideB + SideC;
}


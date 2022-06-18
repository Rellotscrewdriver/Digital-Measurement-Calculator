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

void Solution::TriangleAHF(){
    double side_perimeter = first_para + second_para + third_para / 2;
    cout << "Side_Perimeter: " << "(SideA + SideB + SideC) / 2\n";
    cout << FORMULA << "v/side_perimeter  * (side_perimeter - SideA) * (side_perimeter - SideB) * (side_perimeter - SideC)\n";
    cout << SOLUTION;
    cout << "= " << "( " << first_para << " + " << second_para << " + " << third_para << ") / 2\n";
    cout << "= " << "( " << first_para + second_para << " + " << third_para << ") / 2\n";
    cout << "= " << "( " << first_para + second_para + third_para << ") / 2\n";
    cout << "= " << side_perimeter << "\n";
    cout << "= v/(" << side_perimeter << " * (" << side_perimeter << " - " << first_para << ")) * (" 
    << side_perimeter << " - " << second_para << ") * (" 
    << side_perimeter << " - " << third_para << ")\n";
    cout << "= v/(" << side_perimeter << " * (" << side_perimeter << " - " << first_para << ")) * (" 
    << side_perimeter << " - " << second_para << ") * (" 
    << side_perimeter - third_para << ")\n"; 
    cout << "= v/(" << side_perimeter << " * (" << side_perimeter << " - " << first_para << ")) * (" 
    << side_perimeter - second_para << ") * (" 
    << side_perimeter - third_para << ")\n"; 
    cout << "= v/(" << side_perimeter << " * (" << side_perimeter - first_para << ")) * (" 
    << side_perimeter - second_para << ") * (" 
    << side_perimeter - third_para << ")\n"; 
    cout << "= v/(" << side_perimeter << " * (" << side_perimeter - first_para * side_perimeter - second_para 
    << ") * (" << side_perimeter - third_para << ")\n"; 
    cout << "= v/(" << side_perimeter << " * (" << side_perimeter - first_para * side_perimeter - second_para * side_perimeter - third_para << ")\n"; 
    cout << "= v/(" << side_perimeter * side_perimeter - first_para * side_perimeter - second_para * side_perimeter - third_para << ")\n"; 
}

void Solution::TriangleAofE(){
    cout << FORMULA << "(sqrt(3) / 4) * Side * Side\n";
    cout << SOLUTION;
    cout << "= v/(3) / 4" << " * " << first_para << " * " << first_para << "\n";
    cout << "= v/(3) / 4" << " * " << first_para * first_para << "\n";
    cout << "= v/(3)" << " * " << first_para * first_para * 4 << "\n";
}

void Solution::TriangleA(){
    cout << FORMULA << "0.5 * base * height\n";
    cout << SOLUTION;
    cout << "= " << 0.5 << " * " << first_para << " * " << second_para << "\n";
    cout << "= " << 0.5 << " * " << first_para * second_para << "\n";
}

void Solution::TriangleAofI(){
    cout << FORMULA << "(1 / 4) * SideB * sqrt((4 * SideA * SideA - SideB * SideB))\n";
    cout << SOLUTION;
    cout << "= (1 / 4) * " << second_para << " * v/(4 * " << first_para << " * " << first_para << " - " << second_para << " * " << second_para << "))\n"; 
    cout << "= (1 / 4) * " << second_para << " * v/(4 * " << first_para << " * " << first_para << " - " << second_para * second_para << "))\n"; 
    cout << "= (1 / 4) * " << second_para << " * v/(4 * " << first_para * first_para << " - " << second_para * second_para << "))\n"; 
    cout << "= (1 / 4) * " << second_para << " * v/(4 * " << first_para * first_para - second_para * second_para << "))\n"; 
    cout << "= (1 / 4) * " << second_para << " * v/(" << 4 * first_para * first_para - second_para * second_para << ")\n"; 
    cout << "= " << (1 / 4) * second_para << " * v/(" << 4 * first_para * first_para - second_para * second_para << ")\n"; 
}

void Solution::TriangleP(){
    cout << FORMULA << "SideA + SideB + SideC\n";
    cout << SOLUTION;
    cout << "= " << first_para << " + " << second_para << " + " << third_para << "\n";
    cout << "= " << first_para << " + " << second_para + third_para << "\n";
}

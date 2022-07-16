#include "../Include/Shape_2D.h"
#include "../Include/Handle_Exception.h"
#include <cmath>


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

double Triangle::AofITriangle(double Comm_one_Side, double SideB){
    return Comm_one_Side * SideB / 2;
}

double Triangle::AHFTriangle(double SideA, double SideB, double SideC){
    side_perimeter = (SideA + SideB + SideC) / 2;
    return sqrt(side_perimeter  * (side_perimeter - SideA) * (side_perimeter - SideB) * (side_perimeter - SideC));
}

double Triangle::PTriangle(double SideA, double SideB, double SideC){
    return SideA + SideB + SideC;
}

void Solution::Sol_TriangleAHF(){
    double side_perimeter = first_para + second_para + third_para / 2;
    cout << "Side_Perimeter: " << "(SideA + SideB + SideC) / 2\n";
    cout << color::yellow << FORMULA << "v/side_perimeter  * (side_perimeter - SideA) * (side_perimeter - SideB) * (side_perimeter - SideC)\n" << color::reset;
    cout << SOLUTION;
    cout << "= " << "( " << first_para << " + " << second_para << " + " << third_para << ") / 2\n";
    cout << "= " << "( " << first_para + second_para << " + " << third_para << ") / 2\n";
    cout << "= " << "( " << first_para + second_para + third_para << ") / 2\n";
    cout << "= " << side_perimeter << "\n\n";
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

void Solution::Sol_TriangleAofE(){
    cout << color::yellow << FORMULA << "(sqrt(3) / 4) * Side * Side\n" << color::reset;
    cout << SOLUTION;
    cout << "= v/(3) / 4" << " * " << first_para << " * " << first_para << "\n";
    cout << "= v/(3) / 4" << " * " << first_para * first_para << "\n";
    cout << "= v/(3)" << " * " << first_para * first_para * 4 << "\n";
}

void Solution::Sol_TriangleA(){
    cout << color::yellow << FORMULA << "0.5 * base * height\n" << color::reset;
    cout << SOLUTION;
    cout << "= " << 0.5 << " * " << first_para << " * " << second_para << "\n";
    cout << "= " << 0.5 << " * " << first_para * second_para << "\n";
}

void Solution::Sol_TriangleAofI(){
    cout << color::yellow << FORMULA << "Common Side + Another Upequal Side / 2\n" << color::reset;
    cout << SOLUTION;
    cout << "= " << first_para << " * " << second_para << " / " << 2 << "\n";
    cout << "= " << first_para * second_para << " / " << 2 << endl; 
}

void Solution::Sol_TriangleP(){
    cout << color::yellow << FORMULA << "SideA + SideB + SideC\n" << color::reset;
    cout << SOLUTION;
    cout << "= " << first_para << " + " << second_para << " + " << third_para << "\n";
    cout << "= " << first_para << " + " << second_para + third_para << "\n";
}

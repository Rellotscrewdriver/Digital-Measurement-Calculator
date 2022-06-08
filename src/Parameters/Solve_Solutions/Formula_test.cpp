#include "../../Include/parameter.h"
#define SOLUTION "\nSolution:\n"
#define FORMULA "\nFormula: "

void Shape_finder2D_Area(int ShapeNum);
void Shape_finder2D_Perimeter(int ShapeNum);

void Parameter::Sum_Solution(){
    if(Measure_Type == 2){
        Shape_finder2D_Area(Shape_Value);
    } else {
        Shape_finder2D_Perimeter(Shape_Value);
    }
}

void SqrtA(double first);
void SqrtP(double first);
void CircleP(double first);
void CircleA(double first);

void Parameter::Shape_finder2D_Area(int ShapeNum){
    if(ShapeNum == 1){
        SqrtA(first_parameter);
    } else if(ShapeNum == 4){
        CircleA(first_parameter);
    }
}

void Parameter::Shape_finder2D_Perimeter(int ShapeNum){
    if(ShapeNum == 1){
        SqrtP(first_parameter);
    } else if(ShapeNum == 4){
        CircleP(first_parameter);
    }
}

void SqrtA(double first){
    cout << FORMULA << "4 * side" << endl;
    cout << SOLUTION;
    cout << "= 4 * " << first << endl;
}

void SqrtP(double first){
    cout << FORMULA  << "side * side" << endl;
    cout << SOLUTION;
    cout << "= " << first << " * " << first << endl;
}

void CircleP(double first){
    cout << FORMULA  << "2 * pi * r" << endl;
    cout << SOLUTION;
    cout << "= 2 * PI * " << first << "\n";
    cout << "= 2 * " << first * 3.14 << endl;
}

void CircleA(double first){
    cout << FORMULA  << "pi * r * r" << endl;
    cout << SOLUTION;
    cout << "= PI * " << first << " * " << first << endl;
    cout << "= PI * " << first * first << endl;
}

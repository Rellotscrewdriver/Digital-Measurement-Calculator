#include "../Include/parameter.h"
#include "../Include/Solution.h"

void Parameter::Sum_Solution2d(){
Solution sol;
sol.first_para  = first_parameter;
sol.second_para = second_parameter;
sol.third_para  = third_parameter;
sol.fourth_para = fourth_parameter;


    if(Measure_Type == 1 && dimension == "2D"){
        sol.Shape_finder2D_Area(Shape_Value);
    } else if(Measure_Type == 2 && dimension == "2D"){
        sol.Shape_finder2D_Perimeter(Shape_Value);
    } else if(Shape_Value >= 16){
        sol.Triangle(Shape_Value);
    }
}

void Parameter::Sum_Solution3d(){
Solution sol;
sol.first_para  = first_parameter;
sol.second_para = second_parameter;
sol.third_para  = third_parameter;
sol.fourth_para = fourth_parameter;

    if(Measure_Type == 1 && dimension == "3D"){
        sol.Shape_finder3D_Surface_Area(Shape_Value);
    } else {
        sol.Shape_finder3D_Volume(Shape_Value);
    } 
}

void Parameter::Sum_Solution3d_2(){
Solution sol;
sol.first_para  = first_parameter;
sol.second_para = second_parameter;
sol.third_para  = third_parameter;
sol.fourth_para = fourth_parameter;

    if(Measure_Type == 1 && dimension == "3D"){
        sol.Shape_finder3D_Curved_Surface_Area(Shape_Value);
    } else if(Measure_Type == 1 && dimension == "3D"){
        sol.Shape_finder3D_Total_Surface_Area(Shape_Value);
    } else {
        sol.Shape_finder3D_Volume(Shape_Value);
    }
}

void Solution::Triangle(int ShapeNum){
    Parameter sol;

    if(ShapeNum == 16){
        TriangleAofE(sol.first_parameter);
    } else if(ShapeNum == 17){

    } else if(ShapeNum == 18){

    } else {

    }
}

void Solution::Shape_finder2D_Area(int ShapeNum){

    if(ShapeNum == 1){
        SqrtA();
    } else if(ShapeNum == 4){
        CircleA();
    } 
}

void Solution::Shape_finder2D_Perimeter(int ShapeNum){

    if(ShapeNum == 1){
        SqrtP();
    } else if(ShapeNum == 4){
        CircleP();
    }
}

void Solution::Shape_finder3D_Surface_Area(int ShapeNum){
    Parameter sol;
    
    if(ShapeNum == 1){
        CubeSA(sol.first_parameter);
    } else if(ShapeNum == 3){
        SphereSA(sol.first_parameter);
    }
}

void Solution::Shape_finder3D_Volume(int ShapeNum){
    Parameter sol;
    
    if(ShapeNum == 1){
        CubeV(sol.first_parameter);
    } else if(ShapeNum == 3){
        SphereV(sol.first_parameter);
    } else if(ShapeNum == 4){
        HemisphereV(sol.first_parameter);
    }
}

void Solution::Shape_finder3D_Total_Surface_Area(int ShapeNum){
    Parameter sol;
    
    if(ShapeNum == 4){
        HemisphereTSA(sol.first_parameter);
    } else if(ShapeNum == 23){
        CircleP();
    }
}

void Solution::Shape_finder3D_Curved_Surface_Area(int ShapeNum){
    Parameter sol;
    
    if(ShapeNum == 4){
        HemisphereCSA(sol.first_parameter);
    } else if(ShapeNum == 22){
        CircleP();
    }
}

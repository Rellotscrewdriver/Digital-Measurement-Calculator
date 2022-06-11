#include "../Include/parameter.h"
#include "../Include/Solution.h"

void Parameter::Sum_Solution2d(){
Solution sol;
sol.first_para  = first_parameter;
sol.second_para = second_parameter;
sol.third_para  = third_parameter;
sol.fourth_para = fourth_parameter;


    if(Measure_Type == 1){
        sol.Shape_finder2D_Area(Shape_Value);
    } else if(Measure_Type == 2){
        sol.Shape_finder2D_Perimeter(Shape_Value);
    } else if(Shape_Value >= 16){
        sol.TriangleArea(Shape_Value);
    }
}

void Parameter::Sum_Solution3d(){
Solution sol;
sol.first_para  = first_parameter;
sol.second_para = second_parameter;
sol.third_para  = third_parameter;
sol.fourth_para = fourth_parameter;

    if(Measure_Type == 1){
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

    if(Measure_Type == 1){
        sol.Shape_finder3D_Curved_Surface_Area(Shape_Value);
    } else if(Measure_Type == 2){
        sol.Shape_finder3D_Total_Surface_Area(Shape_Value);
    } else {
        sol.Shape_finder3D_Volume(Shape_Value);
    }
}

void Solution::TriangleArea(int ShapeNum){
    Parameter sol;

    if(ShapeNum == 16){
        TriangleA();
    } else if(ShapeNum == 17){
        TriangleAofE();
    } else if(ShapeNum == 18){
        TriangleAofI();
    } else {
        TriangleAHF();
    }
}

void Solution::Shape_finder2D_Area(int ShapeNum){

    if(ShapeNum == 1){
        SquareA();
    } else if(ShapeNum == 4){
        CircleA();
    } else if(ShapeNum == 2){
        RectangleA();
    } else if(ShapeNum == 3){
        ParallelogramA();
    } else if(ShapeNum == 5){
        QuadrilateralA();
    } else if(ShapeNum == 6){
        TrapeziumA();
    } else if(ShapeNum == 7){
        PolygonA();
    }
}

void Solution::Shape_finder2D_Perimeter(int ShapeNum){

    if(ShapeNum == 1){
        SquareP();
    } else if(ShapeNum == 4){
        CircleP();
    } else if(ShapeNum == 2){
        RectangleP();
    } else if(ShapeNum == 3){
        ParallelogramP();
    } else if(ShapeNum == 5){
        QuadrilateralA();
    } else if(ShapeNum == 6){
        TrapeziumA();
    } else {
        TriangleP();
    }
}

void Solution::Shape_finder3D_Surface_Area(int ShapeNum){
    Parameter sol;
    
    if(ShapeNum == 1){
        CubeSA();
    } else if(ShapeNum == 3){
        SphereSA();
    } else {
        CuboidSA();
    }
}

void Solution::Shape_finder3D_Volume(int ShapeNum){
    Parameter sol;
    
    if(ShapeNum == 1){
        CubeV();
    } else if(ShapeNum == 3){
        SphereV();
    } else if(ShapeNum == 4){
        HemisphereV();
    } else if(ShapeNum == 5){
        ConeV();
    } else if(ShapeNum == 6){
        CylinderV();
    } else {
        CuboidV();
    }
}

void Solution::Shape_finder3D_Total_Surface_Area(int ShapeNum){
    Parameter sol;
    
    if(ShapeNum == 4){
        HemisphereTSA();
    } else if(ShapeNum == 5){
        ConeTSA();
    } else if(ShapeNum == 6){
        CylinderTSA();
    }
}

void Solution::Shape_finder3D_Curved_Surface_Area(int ShapeNum){
    Parameter sol;
    
    if(ShapeNum == 4){
        HemisphereCSA();
    } else if(ShapeNum == 5){
        ConeCSA();
    } else if(ShapeNum == 6){
        CylinderCSA();
    }
}

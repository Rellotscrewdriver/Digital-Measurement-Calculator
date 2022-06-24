#include "../Include/Solution.h"

void Solution::Shape_finder2D_Area(int ShapeNum){

    if(ShapeNum == 1){
        Sol_SquareA();
    } else if(ShapeNum == 4){
        Sol_CircleA();
    } else if(ShapeNum == 2){
        Sol_RectangleA();
    } else if(ShapeNum == 3){
        Sol_ParallelogramA();
    } else if(ShapeNum == 5){
        Sol_QuadrilateralA();
    } else if(ShapeNum == 6){
        Sol_TrapeziumA();
    } else if(ShapeNum == 7){
        Sol_PolygonA();
    } else if(ShapeNum == 16){
        Sol_TriangleA();
    } else if(ShapeNum == 17){
        Sol_TriangleAofE();
    } else if(ShapeNum == 18){
        Sol_TriangleAofI();
    } else {
        Sol_TriangleAHF();
    }
}

void Solution::Shape_finder2D_Perimeter(int ShapeNum){

    if(ShapeNum == 1){
        Sol_SquareP();
    } else if(ShapeNum == 4){
        Sol_CircleP();
    } else if(ShapeNum == 2){
        Sol_RectangleP();
    } else if(ShapeNum == 3){
        Sol_ParallelogramP();
    } else if(ShapeNum == 5){
        Sol_QuadrilateralP();
    } else if(ShapeNum == 6){
        Sol_TrapeziumP();
    } else {
        Sol_TriangleP();
    }
}

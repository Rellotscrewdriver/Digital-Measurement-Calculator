#include "../Include/Solution.h"

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
    } else if(ShapeNum == 16){
        TriangleA();
    } else if(ShapeNum == 17){
        TriangleAofE();
    } else if(ShapeNum == 18){
        TriangleAofI();
    } else {
        TriangleAHF();
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
        QuadrilateralP();
    } else if(ShapeNum == 6){
        TrapeziumP();
    } else {
        TriangleP();
    }
}

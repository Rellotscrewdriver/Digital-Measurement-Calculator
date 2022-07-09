#include "../Include/Solution.h"

void Solution::Shape_finder3D_Surface_Area(int ShapeNum){
    Parameter sol;
    
    if(ShapeNum == 1){
        Sol_CubeSA();
    } else if(ShapeNum == 3){
        Sol_SphereSA();
    } else {
        Sol_CuboidSA();
    }
}

void Solution::Shape_finder3D_Volume(int ShapeNum){
    Parameter sol;
    
    if(ShapeNum == 1){
        Sol_CubeV();
    } else if(ShapeNum == 3){
        Sol_SphereV();
    } else if(ShapeNum == 4){
        Sol_HemisphereV();
    } else if(ShapeNum == 5){
        Sol_ConeV();
    } else if(ShapeNum == 6){
        Sol_CylinderV();
    } else {
        Sol_CuboidV();
    }
}

void Solution::Shape_finder3D_Total_Surface_Area(int ShapeNum){
    Parameter sol;
    
    if(ShapeNum == 4){
        Sol_HemisphereTSA();
    } else if(ShapeNum == 5){
        Sol_ConeTSA();
    } else if(ShapeNum == 6){
        Sol_CylinderTSA();
    }
}

void Solution::Shape_finder3D_Curved_Surface_Area(int ShapeNum){
    Parameter sol;
    
    if(ShapeNum == 4){
        Sol_HemisphereCSA();
    } else if(ShapeNum == 5){
        Sol_ConeCSA();
    } else if(ShapeNum == 6){
        Sol_CylinderCSA();
    }
}


/*LEFTOVER: I had to ditch the idea of multiple approaches to solve the question since 
it will make the code very unreable, I couldn't find anyway to solve this
also, it will take a very long time to make them as I need to think their approaches of each and every shape
int rand_god = rand() % 3;

void Solution::SphereV(){
    cout << FORMULA  << "4 * PI * Radius * (Radius * Radius * Radius)" << endl;
    
    cout << SOLUTION;
    cout << "4 * PI * (" << first_para << " * " << first_para << " * " << first_para << ")\n";

    if(rand_god == 1){
        cout << "number: " << rand_god << endl;
        cout << "4 * PI * (" << first_para * first_para << " * " << first_para << ")\n";
    } else {
        cout << "number: " << rand_god << endl;
        cout << "4 * PI * (" << first_para << " * " << first_para * first_para << ")\n";
    }

    if(rand_god == 2){
        cout << "number: " << rand_god << endl;
        cout << 4 * 3.14 << " * " << first_para * first_para * first_para << "\n";       
    } else {
        cout << "number: " << rand_god << endl;
        cout << "4 * PI * " << first_para * first_para * first_para << "\n";
        cout << "4 * " << 3.14 * first_para * first_para * first_para << "\n";
    }
}*/
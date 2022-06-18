#include "../Include/Solution.h"

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
//TODO: finish their solutions and formulas
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
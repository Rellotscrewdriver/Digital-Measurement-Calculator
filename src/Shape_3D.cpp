#include "Shape_3D.h"
#include "Shape_2D.h"

Shape_3D::Shape_3D()
{
  cout << "Which 3D shape do you want to find the measure: " << endl;
    cout << "1. Cube \n";
    cout << "2. Cuboid \n";
    cout << "3. sphere \n";
    cout << "5. Cone \n";
    cout << "6. Cylinder \n";
    cin >> WhichShape;

    switch(WhichShape){
        case 1:
            this->Cube();
        break;
        case 2:
            this->Cuboid();
        break;
        case 3:
            this->Sphere();
        break;
        case 4:
            this->Cone();
        break;
        case 5:
            this->Cylinder();
        break;
    }
}

Shape_3D::~Shape_3D(){}

void Shape_3D::Cube(){

}

void Shape_3D::Cuboid(){

}

void Shape_3D::Sphere(){

}

void Shape_3D::Cone(){

}

void Shape_3D::Cylinder(){

}

void Shape_3D::Hemisphere(){

}

#include "Shape_3D.h"
#include "Shape_2D.h"

Shape_3D::Shape_3D()
{
    cout << "Which 3D shape do you want to wanna measure: " << endl;
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
    cout << "What you wanna measure form" << "?" << endl;
    cout << "1. Surface Area" << endl;
    cout << "2. Volume" << endl;
    cin >> WhichShape;
    if(WhichShape == 1)
        this->SACube();
    else if (WhichShape == 2)
        this->VCube();
    else
        cout << "Try Again" << endl;
}

void Shape_3D::SACube(){
    cout << "Specify one side of cube to find the area" << endl;
    cin >> side;
    cout << 6 * (side * side);
}

void Shape_3D::VCube(){
    cout << "specify one side of cube to find it's volume" << endl;
    cin >> side;
    cout << side * side * side;
}

void Shape_3D::Cuboid(){
    cout << "What you wanna measure form" << "?" << endl;
    cout << "1. Surface Area" << endl;
    cout << "2. Volume" << endl;
    cin >> WhichShape;
    if(WhichShape == 1)
        this->SACube();
    else if (WhichShape == 2)
        this->VCube();
    else
        cout << "Try Again" << endl;

}

void Shape_3D::SACuboid(){
    cout << "specify Height, Width and Height to find it's Surface Area" << endl;
    cout << "Width: ";
    cin >> width;
    cout << endl;
    cout << "Height: ";
    cin >> height;
    cout << endl;
    cout << "Length: ";
    cin >> length;
    cout << endl;
    cout << 2 * ((length * width) + (width * height) + (height * length));
}

void Shape_3D::VCuboid(){
    cout << "specify width, height and volume to find it's volume" << endl;
    cout << "Width: ";
    cin >> width;
    cout << endl;
    cout << "Height: ";
    cin >> height;
    cout << endl;
    cout << "Length: ";
    cin >> length;
    cout << endl;
    cout << length * height * width;
}

void Shape_3D::Sphere(){
    cout << "What you wanna measure form" << "?" << endl;
    cout << "1. Surface Area" << endl;
    cout << "2. Volume" << endl;
    cout << "3. Hemisphere";
    cin >> WhichShape;
    if(WhichShape == 1)
        this->SASphere();
    else if (WhichShape == 2)
        this->VSphere();
    else if (WhichShape == 3)
        this->Hemisphere();
    else
        cout << "Try Again" << endl;

}

void Shape_3D::SASphere(){}
void Shape_3D::VSphere(){}

// Hemisphere class

void Shape_3D::Hemisphere(){
    cout << "What you wanna measure form" << "?" << endl;
    cout << "1. Curved Surface Area" << endl;
    cout << "2. Total Surface Area" << endl;
    cout << "3. Volume" << endl;
    cin >> WhichShape;
    if(WhichShape == 1)
        this->CSAHemisphere();
    else if (WhichShape == 2)
        this->TSAHemisphere();
    else if (WhichShape == 3)
        this->VHemisphere();
    else
        cout << "Try Again" << endl;

}

void Shape_3D::CSAHemisphere(){}
void Shape_3D::TSAHemisphere(){}
void Shape_3D::VHemisphere(){}

//Cone Class
void Shape_3D::Cone(){
    cout << "What you wanna measure form" << "?" << endl;
    cout << "1. Curved Surface Area" << endl;
    cout << "2. Total Surface Area(Right Circular)" << endl;
    cout << "3. Volume" << endl;
    cin >> WhichShape;
    if(WhichShape == 1)
        this->CSACone();
    else if (WhichShape == 2)
        this->TSACone();
    else if (WhichShape == 2)
        this->VCone();
    else
        cout << "Try Again" << endl;

}

void Shape_3D::CSACone(){}
void Shape_3D::TSACone(){}
void Shape_3D::VCone(){}

//Cylinder class

void Shape_3D::Cylinder(){
    cout << "What you wanna measure form" << "?" << endl;
    cout << "1. Curved Surface Area" << endl;
    cout << "2. Total Surface Area" << endl;
    cout << "3. Volume" << endl;
    cin >> WhichShape;
    if(WhichShape == 1)
        this->CSACylinder();
    else if (WhichShape == 2)
        this->TSACylinder();
    else if (WhichShape == 3)
        this->VCylinder();
    else
        cout << "Try Again" << endl;

}

void Shape_3D::CSACylinder(){}
void Shape_3D::TSACylinder(){}
void Shape_3D::VCylinder(){}

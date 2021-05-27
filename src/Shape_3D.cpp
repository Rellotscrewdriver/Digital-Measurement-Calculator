#include "Shape_3D.h"
#include "Shape_2D.h"

const string input = "your input: ";
const string output = "Output: ";
string shape3D;

Shape_3D::Shape_3D()
{
    cout << "Which 3D shape do you want to wanna measure: " << endl;
    cout << "1. Cube \n";
    cout << "2. Cuboid \n";
    cout << "3. sphere \n";
    cout << "5. Cone \n";
    cout << "6. Cylinder \n";
    cout << input; cin >> WhichShape;
    cout << endl;
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
        default:
            cout << "Invaild Input" << endl;
            Shape_3D();

    }
}

Shape_3D::~Shape_3D(){}

// Cube Class starts

void Shape_3D::Cube(){
    shape3D = "Cube ";
    cout << "What you wanna measure form " << shape3D << "?" << endl;
    cout << "1. Surface Area" << endl;
    cout << "2. Volume" << endl;
    cout << input; cin >> WhichShape;
    if(WhichShape == 1)
        this->SACube();
    else if (WhichShape == 2)
        this->VCube();
    else
        cout << "Try Again" << endl;
        Cube();
}

void Shape_3D::SACube(){
    cout << "Specify one side of cube to find the area" << endl;
    cout << input; cin >> side;
    cout << output << 6 * (side * side);
    Shape_3D();
}

void Shape_3D::VCube(){
    cout << "specify one side of cube to find it's volume" << endl;
    cout << input; cin >> side;
    cout << output << side * side * side;
    Shape_3D();
}

/* Cube Class ends
   Cuboid Class starts */

void Shape_3D::Cuboid(){
    shape3D = "Cuboid ";
    cout << "What you wanna measure form "<< shape3D <<"?" << endl;
    cout << "1. Surface Area" << endl;
    cout << "2. Volume" << endl;
    cout << input; cin >> WhichShape;
    if(WhichShape == 1)
        this->SACube();
    else if (WhichShape == 2)
        this->VCube();
    else
        cout << "Try Again" << endl;
        Cuboid();
}

void Shape_3D::SACuboid(){
    cout << "specify Height, Width and Height to find it's Surface Area" << endl;
    cout << Text_width;
    cin >> width;
    cout << endl;
    cout << Text_height;
    cin >> height;
    cout << endl;
    cout << Text_length;
    cin >> length;
    cout << endl;
    cout << 2 * ((length * width) + (width * height) + (height * length)) << endl;
    Shape_3D();
}

void Shape_3D::VCuboid(){
    cout << "specify width, height and volume to find it's volume" << endl;
    cout << Text_width; cin >> width;
    cout << Text_height; cin >> height;
    cout << Text_length; cin >> length;
    cout << length * height * width << endl << endl;
    Shape_3D();
}

void Shape_3D::Sphere(){
    shape3D = "Sphere";
    cout << "What you wanna measure form " << shape3D <<"?" << endl;
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
        Sphere();
}

void Shape_3D::SASphere(){
    cout << "specify the radius" << input;
    cin >> radius;
    cout << 4 * pi * radius * radius << endl;
    Shape_3D();
}
void Shape_3D::VSphere(){
    cout << "specify the radius" << input;
    cin >> radius;
    cout << output << 4/3 * pi * radius * (radius * radius * radius) << endl;
    Shape_3D();
}

// Hemisphere class

void Shape_3D::Hemisphere(){
    shape3D = "Hemisphere";
    cout << "What you wanna measure form" << shape3D << "?" << endl;
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
        Hemisphere();

}

void Shape_3D::CSAHemisphere(){
    cout << "Specify the radius to find the Curved Surface area of hemisphere: ";
    cout << Text_radius; cin >> radius;
    cout << output << 2 * pi * (radius * radius) << endl;
    Shape_3D();
}
void Shape_3D::TSAHemisphere(){
    cout << "Specify the radius to find the Total Surface Area of hemisphere: ";
    cout << Text_radius; cin >> radius;
    cout << output << 3 * pi * (radius * radius) << endl;
    Shape_3D();
}
void Shape_3D::VHemisphere(){
    cout << "Specify the radius to find the volume of hemisphere: ";
    cout << Text_radius; cin >> radius;
    cout << output << 2/3 * pi * (radius * radius * radius) << endl;
    Shape_3D();
}

//Cone Class
void Shape_3D::Cone(){
    shape3D = "Cone";
    cout << "What you wanna measure form" << shape3D << "?" << endl;
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
        Cone();
}

void Shape_3D::CSACone(){
    cout << "specify the radius to find Curved surface area of cone";
    cout << Text_radius; cin >> radius;
    cout << "Output:" << pi * radius * length << endl;
    Shape_3D();
}
void Shape_3D::TSACone(){
    cin >> radius;
    cin >> slant_height;
    cout << pi * radius * (slant_height * radius) << endl;
    Shape_3D();
}
void Shape_3D::VCone(){
    cout << "";
    cin >> radius;
    cin >> height;
    cout << 1/3 * pi * (radius * radius) * height << endl;
    Shape_3D();
}

//Cylinder class

void Shape_3D::Cylinder(){
    shape3D = "Cylinder";
    cout << "What you wanna measure form" << shape3D << "?" << endl;
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
        Cylinder();
}

void Shape_3D::CSACylinder(){
    cin >> radius;
    cin >> height;
    cout << 2 * pi * radius * height << endl;
    Shape_3D();
}
void Shape_3D::TSACylinder(){
    cout << Text_radius; cin >> radius;
    cin >> height;
    cout << 2 * pi * radius * (radius + height) << endl;
    Shape_3D();
}
void Shape_3D::VCylinder(){
    cout << Text_radius; cin >> radius;
    cout << Text_height; cin >> height;
    cout << pi * radius * radius * height << endl;
    Shape_3D();
}

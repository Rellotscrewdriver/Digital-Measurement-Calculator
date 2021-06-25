#include "Shape_3D.h"

Shape_3D::Shape_3D()
{
    cout << "Which 3D shape do you want to wanna measure: " << endl;
    cout << "1. Cube \n";
    cout << "2. Cuboid \n";
    cout << "3. Sphere \n";
    cout << "4. Cone \n";
    cout << "5. Cylinder \n";
    cout << input;
    cin >> WhichShape;
    cout << endl;
    switch(WhichShape){
        case 1:
            Cube();
        break;
        case 2:
            Cuboid();
        break;
        case 3:
            Sphere();
        break;
        case 4:
            Cone();
        break;
        case 5:
            Cylinder();
        break;
        default:
            Exh.check_if_typed_string_and_invaild_number();
            Shape_3D();
        break;
    }
}

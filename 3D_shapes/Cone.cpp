#include "Shape_3D.h"

Cone::Cone(){
    cout << str_measure_type;
    cout << "1. Curved Surface Area" << endl;
    cout << "2. Total Surface Area(Right Circular)" << endl;
    cout << "3. Volume" << endl;
    cout << "4" << exit_str;
    cin >> WhichShape;
    if(WhichShape == 1)
        this->CSACone();
    else if (WhichShape == 2)
        this->TSACone();
    else if (WhichShape == 2)
        this->VCone();
    else if (WhichShape == 4) {
        cout << console_message;
        getchar();
    } else {
        Exh.check_if_typed_string_and_invaild_number();
        Cone();
    }
}

void Cone::CSACone(){
    cout << "specify the radius to find Curved surface area of cone";
    cout << Text_radius; cin >> Radius;
    cin >> length;
    Exh.check_if_typed_string();
    if( (Radius <= 0.0 && length <= 0.0) || (length <= 0.0 || Radius <= 0.0) )
        cout << Exh.error_message;
    else
    cout << "Output:" << pi * Radius * length << endl << endl;

    Shape_3D();
}

void Cone::TSACone(){
    cin >> Radius;
    cin >> slant_height;
    Exh.check_if_typed_string();
    if( (Radius <= 0.0 && slant_height <= 0.0) || (slant_height <= 0.0 || Radius <= 0.0) )
        cout << Exh.error_message;
    else
    cout << pi * Radius * (slant_height * Radius) << endl << endl;

    Shape_3D();
}

void Cone::VCone(){
    cin >> Radius;
    cin >> height;
    Exh.check_if_typed_string();
    if( (Radius <= 0.0 && height <= 0.0) || (height <= 0.0 || Radius <= 0.0) )
        cout << Exh.error_message;
    else
    cout << 1/3 * pi * (Radius * Radius) * height << endl << endl;

    Shape_3D();
}

#include "../Include/Display.h"

string Display::Log_one_parameter_text(int ShapeNum){
    if(ShapeNum == 1 || ShapeNum == 17){
        return "One side: ";
    } else if(ShapeNum == 4 || ShapeNum == 3){
        return "Radius: ";
    } else {}
}

string Display::Log_two_parameters_text(int ShapeNum, int input_step){
     if(ShapeNum == 5 || ShapeNum == 6 || ShapeNum == 7 || ShapeNum == 16){
         if(input_step == 1 && ShapeNum == 16){
            return "Base: ";
         } else if(input_step == 2 && ShapeNum == 6 || ShapeNum == 16){
            return "Height: ";
         } else if(input_step == 2 && ShapeNum == 7){
            return "Apothem: ";
         } else if(input_step == 2){
            return "Slant_Height: ";
         } else if(input_step == 1){
            return "Radius: ";
         } else {}
     } else if(ShapeNum == 2 || ShapeNum == 3){
        if(input_step == 1 && ShapeNum == 2){
            return "Length: ";
        } else if(input_step == 1){
            return "Height: ";
        } else if(input_step == 2){
            return "Width: ";
        } else {
            return "Unknown parameter";
        }
     } else if(ShapeNum == 18){
        if(input_step == 1){
            return "First side: ";
        } else {
            return "Second side: ";
        }
     } else {
        return "Unknown parameter";
     }
}

string Display::Log_three_parameters_text(int ShapeNum, int input_step){
    if(ShapeNum == 2){
        if(input_step == 1){
            return "Length: ";
        } else if(input_step == 2){
            return "Width: ";
        } else if(input_step == 3){
            return "Depth(or Height): ";
        } else {}
    } else if(ShapeNum == 8 || ShapeNum == 19){
        if(input_step == 1){
            return "First side: ";
        } else if(input_step == 2){
            return "Second side: ";
        } else if(input_step == 3){
            return "Third side: ";
        } else {}
    }  else {}
}

string Display::Log_three_four_parameters_text(int ShapeNum){
    if(ShapeNum == 5){
        return "Diagonal: ";
    } else {
        return "Height: ";
    }
}


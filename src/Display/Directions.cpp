#include "../Include/Display.h"

string Display::one_parameter_text(int ShapeNum){
    if(ShapeNum == 1){
        return "Input one side: ";
    } else if(ShapeNum == 4 || ShapeNum == 3){
        return "Input radius: ";
    } else if(ShapeNum == 17){
        return "input one side of triangle: ";
    } else {}
}

string Display::two_parameters_text(int ShapeNum, int input_step){
     if(ShapeNum == 5 || ShapeNum == 6 || ShapeNum == 7 || ShapeNum == 16){
         if(input_step == 1 && ShapeNum == 16){
            return "Input base: ";
         } else if(input_step == 2 && ShapeNum == 6 || ShapeNum == 16){
            return "Input height: ";
         } else if(input_step == 2 && ShapeNum == 7){
            return "Input apothem: ";
         } else if(input_step == 2){
            return "Input slant_Height: ";
         } else if(input_step == 1){
            return "Input radius: ";
         }
     } else if(ShapeNum == 2 || ShapeNum == 3){
        if(input_step == 1 && ShapeNum == 2){
            return "Input length: ";
        } else if(input_step == 1){
            return "Input height: ";
        } else if(input_step == 2){
            return "Input width: ";
        } else {
            return "Unknown parameter";
        }
     } else if(ShapeNum == 18){
        if(input_step == 1){
            return "Input first side: ";
        } else {
            return "Input second side: ";
        }
     } else {
        return "Unknown parameter";
     }
}

string Display::three_parameters_text(int ShapeNum, int input_step){
    if(ShapeNum == 2){
        if(input_step == 1){
            return "Input Length: ";
        } else if(input_step == 2){
            return "Input Width: ";
        } else if(input_step == 3){
            return "Input Depth(or Height): ";
        } else {}
    } else if(ShapeNum == 8 || ShapeNum == 19){
        if(input_step == 1){
            return "Input first side: ";
        } else if(input_step == 2){
            return "Input second side: ";
        } else if(input_step == 3){
            return "Input third side: ";
        } else {}
    }
}

/*
LEFTOVER: I bet that someone will ask "Why not make a common function for input_step?"
that concept did not work as I prototyped for two_parameters_text()
as idk how it will work or someone knows the solution for it
here's the leftover:

string Display::two_parameters_text(int ShapeNum, int input_step){
     if(ShapeNum == 5 || ShapeNum == 6 || ShapeNum == 7 || ShapeNum == 16){
        return step_input(ShapeNum, input_step);
        return
     } else {}
}

string Display::step_input(string sddf, int step){
    if(dis_input_step == step){
        return sddf;
    } else {
        return "Unknown input-step";
    }
}
*/

string Display::three_four_parameters_text(int ShapeNum){
    if(ShapeNum == 5){
        return "Input diagonal: ";
    } else {
        return "Input height: ";
    }
}


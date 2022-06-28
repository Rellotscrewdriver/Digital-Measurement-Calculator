#include "../Include/parameter.h"
#include "../Include/Solution.h"

void Parameter::Sum_Solution2d(){
Solution sol;
sol.first_para  = first_parameter;
sol.second_para = second_parameter;
sol.third_para  = third_parameter;
sol.fourth_para = fourth_parameter;

    if(Measure_Type == 1){
        sol.Shape_finder2D_Area(Shape_Value);
    } else if(Measure_Type == 2){
        sol.Shape_finder2D_Perimeter(Shape_Value);
    }
}

void Parameter::Sum_Solution3d(){
Solution sol;
sol.first_para  = first_parameter;
sol.second_para = second_parameter;
sol.third_para  = third_parameter;
sol.fourth_para = fourth_parameter;

    if(Measure_Type == 1){
        sol.Shape_finder3D_Surface_Area(Shape_Value);
    } else {
        sol.Shape_finder3D_Volume(Shape_Value);
    } 
}

void Parameter::Sum_Solution3d_2(){
Solution sol;
sol.first_para  = first_parameter;
sol.second_para = second_parameter;
sol.third_para  = third_parameter;
sol.fourth_para = fourth_parameter;

    if(Measure_Type == 1){
        sol.Shape_finder3D_Curved_Surface_Area(Shape_Value);
    } else if(Measure_Type == 2){
        sol.Shape_finder3D_Total_Surface_Area(Shape_Value);
    } else {
        sol.Shape_finder3D_Volume(Shape_Value);
    }
}

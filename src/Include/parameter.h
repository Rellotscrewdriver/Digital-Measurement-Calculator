#pragma once
#define NEWLINE "\n\n"

#include "../Include/Handle_Exception.h"
#include "../Include/Shape_2D.h"
#include "../Include/Shape_3D.h"
#include "../Include/Display.h"


/**********************************************************

    2D_Shape Parameters (P = Perimeter, A = Area)

	one paramter
    1. Square: A: 1 P: 1
    4. Circle: A: 1 P: 1

	two paramters
	2. Rectangle: A: 2 P: 2
    3. Parallelogram: A: 2 P: 2

	four_three_paramters
    5. Quadrilateral: P: 4 A: 3
    6. Trapezium: P: 4 A: 3

	special parameters
	7. Polygon: A: 2 P: 10
    8. Triangle: A: 1. 2 2. 1 3. 2 4. 3 P: 3

*************************************************************

	3D_Shape Parameters (SA = Surface Area, V = Volume, CSA = Curved Surface Area, TSA = Total Surface Area)

    one parameter
	1. Cube: SA: 1 V: 1
    3. Sphere: SA: 1 V: 1
	4. Hemisphere: CSA: 1 TSA: 1 V: 1

	two parameters
	6. Cynlinder: CSA: 2 TSA: 2 V: 2
    5. Cone: CSA: 2 TSA: 2 V: 2

	three parameters
	2. Cuboid: SA: 3 V: 3

************************************************************/

class Parameter{
public:
		/////////////////////////////////////////////////
		/// \brief it filters out Shapes
		///
		/// \param	Shape Number
		/// \param	measurement type
		///
		/// This function filters out 2D & 3D_Shapes to move
		///	them into their respective parameters to be filled with user-input
		///	it also assigns Shape_Value, Measure_Type, dimension, is_3D
		///	which is used by the parameter functions
		/////////////////////////////////////////////////
		void filter_2D_Shapes(int Which_2D_Shape, int measure_type);
		void filter_3D_Shapes(int Which_3D_Shape, int measure_type);

		/////////////////////////////////////////////////
		/// \brief this is a special function for triangle
		///
		/// \param	Type of Triangle to calculate the area
		///
		/// Since the triangle shape had so many types of Areas
		/// to choose from, I decided to make a function
		/// dedicated to filtering triangles
		/////////////////////////////////////////////////
        void Special_Triangle(int Which_Type_Area);

private:

        Display dis;
        int Shape_Value;
        int Measure_Type;

		/////////////////////////////////////////////////
		/// \brief filters measurement names
		///
		///	\return measurement name
		/////////////////////////////////////////////////
        string filter_measurement_name();

        string Shape_Name;
        string Measurement_Name;
		string dimension;

		bool is_3D;

        double first_parameter;
		double second_parameter;
		double third_parameter;
		double fourth_parameter;

		/////////////////////////////////////////////////
		/// \brief filters their measurement type and outputs the answer
		///
		/// \param	Area
		/// \param	Perimeter
		/////////////////////////////////////////////////
        void filter_measurement_type2D(double Area, double Perimeter);

		/////////////////////////////////////////////////
		/// \brief filters their measurement type and outputs the answer
		///
		/// \param	Surface Area
		/// \param	Volume
		/////////////////////////////////////////////////
        void filter_measurement_type3D(double Surface_Area, double Volume);

		/////////////////////////////////////////////////
		/// \brief filters their measurement type and outputs the answer
		///
		/// \param	Curved Surface Area
		/// \param	Total Surface Area
		/// \param	Volume
		/////////////////////////////////////////////////
        void filter_measurement_type3D(double Curved_Surface_Area, double Total_Surface_Area, double Volume);

		/////////////////////////////////////////////////
		/// \brief these functions are responsible for taking types of user_input
		///
		/// these functions take in different types of user_input and then check
		///	whether are vaild enough to be send off to their respective functions
		/////////////////////////////////////////////////
		void one_parameter();
		void two_parameters();
		void three_parameters();
		/// \brief these are used for quadrilateral and trapezium
		void three_four_parameters();
		void Special(); /// \brief This is a special function for polygon(perimeter)
};

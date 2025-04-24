/// \file CRhombus.cpp
///	\brief class Rhombus: implementation of the functions
///
///	Details.
///

#include<iostream> 
#include<cmath>
#include "CRhombus.h"

using namespace std;

/// @brief default constructor 
Rhombus::Rhombus() {

	cout << "Rhombus - constructor - default" << endl;

	Init();

}

/// @brief constructor 
/// @param dL diagonal (longer)
/// @param dS diagonal (shorter)
Rhombus::Rhombus(float dH, float dV) {

	Init();

	cout << "Rhombus - constructor" << endl;

	if (dH	<= 0. || dV <= 0.) {
		WarningMessage("constructor: diagonals should be > 0"); 
		SetDim(0,0);
	}
	else
		SetDim(dH,dV);

}

/// @brief destructor 
Rhombus::~Rhombus() {

	cout << "Rhombus - destructor" << endl;
	Reset();

}

/// @brief copy constructor 
/// @param o reference to the object that should be copied 
Rhombus::Rhombus(const Rhombus &r) { 

	cout << "Rhombus - copy constructor" << endl;

	Init(r);
	
}

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Rhombus& Rhombus::operator=(const Rhombus &r) { 

	cout << "Rhombus - operator =" << endl;

	Init(r);
	
	return *this;
	
}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool Rhombus::operator==(const Rhombus &r) { 

	if (r.diagH == diagH && r.diagV == diagV)
		return true;
		
	return false;
}

/// @brief default initialization of the object
void Rhombus::Init() {
	SetDim(0,0);
	
}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Rhombus::Init(const Rhombus &r) {
	Init();
	SetDim(r.diagH,r.diagV);
}

/// @brief total reset of the object  
void Rhombus::Reset() {
	
	SetDim(0,0);
	
}


/// @brief set longer diagonal of the object
/// @param d diagonal 
void Rhombus::SetDiagH(float d) {

	if (d < 0.) {
		WarningMessage("SetDiagL: diagonal should be > 0");
		return;
	}

	SetDim(d,diagV);

} 

/// @brief set shorter diagonal of the object
/// @param d diagonal 
void Rhombus::SetDiagV(float d) {

	if (d < 0.) {
		WarningMessage("SetDiagS: diagonal should be > 0");
		return;
	}

	SetDim(diagH,d);

}


/// @brief get longer diagonal of the object
/// @return longer diagonal 
float Rhombus::GetDiagH() {

	return diagH;

}

/// @brief get shorter diagonal of the object
/// @return shorter diagonal 
float Rhombus::GetDiagV() {

	return diagV;

}

/// @brief get side of the object
/// @return side 
float Rhombus::GetSide() {

	return sqrt(diagH*diagH/4. + diagV*diagV/4.);

}



/// @brief set the diagonals of the object
/// @param dL longer diagonal  
/// @param dS shorter diagonal
void Rhombus::SetDim(float dH, float dV) {

	
	diagH = dH;
	diagV = dV;  
	
	return;
}

/// @brief get the diagonals of the object
/// @param dL larger diagonal 
/// @param dS shorter diagonal
void Rhombus::GetDim(float &dH, float &dV) {

	dH = diagH;
	dV = diagV; 
	
	return;
}

/// @brief computes the area of the object
/// @return the area 
float Rhombus::GetArea() {
	
	return (diagH*diagV/2.);
}

/// @brief computes the perimeter of the object
/// @return the perimeter 
float Rhombus::GetPerimeter() {
	
	return (4*GetSide());
}



/// @brief write an error message 
/// @param string message to be printed
void Rhombus::ErrorMessage(const char *string) {
	
	cout << endl << "ERROR -- Rhombus --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void Rhombus::WarningMessage(const char *string) {
	
	cout << endl << "WARNING -- Rhombus --";
	cout << string << endl;

}


/// @brief for debugging: all about the object
void Rhombus::Dump() {
	cout << endl;
	cout << "---Rhombus---" << endl; 
	cout << endl;
	
	cout << "Longer diagonal = " << diagH << endl;
	cout << "Shorter diagonal = " << diagV << endl; 
	cout << "Side = " << GetSide() << endl; 
	cout << "Perimeter = " << GetPerimeter() << endl; 
	cout << "Area = " << GetArea() << endl;
	
	
	cout << endl;

}
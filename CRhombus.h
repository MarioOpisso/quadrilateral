/*! \file CRhombus.h
	\brief Declaration of the class Rhombus

	Details.
*/


#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "CQuadrilateral.h"

/// @class Rhombus
/// @brief to manage an object with the shape of a rhombus
class Rhombus : public Quadrilateral
{
private:
	float diagH;
	float diagV;
	

public:
	
	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Rhombus();
	Rhombus(float dH, float dV);
	Rhombus(const Rhombus &r);
	
	~Rhombus();
	/// @}
	
	/// @name OPERATORS
	/// @{
	Rhombus& operator=(const Rhombus &r); 
	bool operator==(const Rhombus &r);
	/// @}
	
	/// @name BASIC HANDLING
	/// @{
	void Init();												
	void Init(const Rhombus &r);							
	void Reset();												
	/// @}
	
	
	/// @name GETTERS / SETTERS
	/// @{
	void SetDiagL(float d);
	void SetDiagS(float d);
	void SetDim(float dH, float dV); 
		
	void GetDim(float &dH, float &dV);
	float GetDiagL();
	float GetDiagS(); 
	float GetPerimeter(); 
	float GetArea();
	float GetSide();
	/// @}
	
	
	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char *string); 
	void WarningMessage(const char *string);
	void Dump();
	/// @}
		
};

#endif
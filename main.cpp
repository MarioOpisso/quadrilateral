#include <iostream>

#include "CRectangle.h"

int main()
{
		float area;
		
		Quadrilateral *arr[2];			
		Rectangle r1;
		Rectangle r2(1, 7);
						

		arr[0] = &r1;
		arr[1] = &r2;
		
		arr[0]-> Dump();
		arr[1]-> Dump();
}
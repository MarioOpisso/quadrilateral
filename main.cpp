#include <iostream>

#include "CRectangle.h"

int main()
{
		float area;
		float a0, a1, a2, a3;
		
		Quadrilateral qdr;			
		Rectangle r1;
		Rectangle r2(1, 7);
						

		qdr.Dump();					
		r1.Dump();
		r2.Dump();
		
		area = r1.GetArea();
		cout << "rettangolo 1 - area: " << area << endl;
		
		r1=r2;
		
		area = r1.GetArea();
		cout << "rettangolo 1 - area: " << area << endl;
}
#include <iostream>

#include "CRectangle.h"

int main()
{
		float area;
		float a0, a1, a2, a3;
		
		Quadrilateral* A;			//NB NON PARTE IL COSTRUTTORE POICHE STO SOLO CREANDO UN PUNTATORE A QUADRILATERO (L'OGGETTO IN SE ANCORA NON ESISTE)
		Rectangle r1;
		Rectangle r2(1, 7);
		
		A= &r1;						//NB COMPILA!!!! E' AMMESSO POICHE' UN PUNTATORE DELLA CLASSE PADRE PUO ANCHE PUNTARE AD UN OGGETTO FIGLIO (POLIMORFISMO)

		A->Dump();					//A E' COMUNQUE UN QUADRILATERO QUINDI CHIAMA IL DUMP QUADRILATERO 
		r1.Dump();					//DUMP RETTANGOLO
		
		area = r1.GetArea();
		cout << "rettangolo 1 - area: " << area << endl;
		
		r1=r2;
		
		area = r1.GetArea();
		cout << "rettangolo 1 - area: " << area << endl;
		
		A->Dump();
		
		//A->SetWidth(11,4);  NON COMPILA POICHE' IL COMPILATORE NON TROVA LA FUNZIONE DEL QUADRILATERAL.H
		
		r1.GetAngles(a0, a1, a2, a3);
}
#ifndef Trojkat_H 
#define Trojkat_H
#include "Punkt.h"
class Trojkat
{ 
	Punkt A;
	Punkt B;
	Punkt C;


	public:
		//setter
		void setA(unsigned int x, unsigned int y); // napisaæ prototypy w pliku nag³owkowym, a w cpp definicje (dzia³anie funkcji)
		void setB(unsigned int x, unsigned int y);
		void setC(unsigned int x, unsigned int y);
		
		//getter, odnosi siê do klasy punkt i jest zawarty w trójk¹t 
		Punkt getA();
		Punkt getB();
		Punkt getC();

		double oblAB();
		double oblAC();
		double oblBC();
		int pwektor();
};

#endif
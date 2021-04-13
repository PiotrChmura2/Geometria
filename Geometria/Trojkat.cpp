#include "Trojkat.h"
#include "Punkt.h"
#include <math.h>

void Trojkat::setA(unsigned int x, unsigned int y) // musze po³¹czyæ z nazw¹ klasy do której odnosi siê funkcja/ metoda
{
	A.setX(x);
	A.setY(y);
}
void Trojkat::setB(unsigned int x, unsigned int y)
{
	B.setX(x);
	B.setY(y);
}
void Trojkat::setC(unsigned int x, unsigned int y)
{
	C.setX(x);
	C.setY(y);
}


Punkt Trojkat::getA()
{
	return A;
}
Punkt Trojkat::getB()
{
	return B;
}
Punkt Trojkat::getC()
{
	return C;
}
double Trojkat::oblAB() // definicja metody zawiera dostep do pkt A,B,C
{
	int roznica1 = A.getX() - B.getX();
	int roznica2 = A.getY() - B.getY();
	return sqrt(pow(roznica1, 2) + pow(roznica2, 2));
}
double Trojkat::oblAC()
{
	int roznica1 = A.getX() - C.getX();
	int roznica2 = A.getY() - C.getY();
	return sqrt(pow(roznica1, 2) + pow(roznica2, 2));
}
double Trojkat::oblBC()
{
	int roznica1 = B.getX() - C.getX();
	int roznica2 = B.getY() - C.getY();
	return sqrt(pow(roznica1, 2) + pow(roznica2, 2));
}
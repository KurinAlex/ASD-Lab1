#include <iostream>
#include <windows.h>

#include "Point.h"

double CalculateDistance(Point A, Point B)
{
	return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

int main()
{
	SetConsoleOutputCP(1251);

	Point A = EnterPoint("A");
	Point B = EnterPoint("B");

	std::cout << "Відстань між точками A та B: " << CalculateDistance(A, B) << std::endl;

	std::cin.get();
}
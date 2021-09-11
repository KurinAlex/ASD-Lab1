#include <iostream>
#include <cmath>
#include <Windows.h>

#include "Lab1.1.h"

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

double EnterDouble(const char* number_name)
{
	double number;

	std::cout << "Введіть " << number_name << ": ";

	while (!(std::cin >> number))
	{
		std::cout << "Введіть " << number_name << ": ";
		std::cin.clear();
		std::cin.ignore(100, '\n');
	}

	return number;
}

Point EnterPoint(const char* point_name)
{
	double x, y;

	std::cout << "Введіть точку " << point_name << ":" << std::endl;

	x = EnterDouble("x");

	y = EnterDouble("y");

	std::cout << std::endl;

	return Point(x, y);
}

double CalculateDistance(Point A, Point B)
{
	return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

int main()
{
	SetConsoleOutputCP(1251);

	Point A = EnterPoint("A");
	Point B = EnterPoint("B");

	std::cout << "Відстань між точками A та B: " << CalculateDistance(A, B);

	getchar();
	getchar();
}
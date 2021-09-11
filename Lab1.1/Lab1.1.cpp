#include <iostream>
#include <cmath>

#include "Lab1.1.h"

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

Point EnterPoint(std::string point_name)
{
	double x, y;

	std::cout << "Enter point " << point_name << ":" << std::endl;

	std::cout << "\tEnter x: ";
	std::cin >> x;

	std::cout << "\tEnter y: ";
	std::cin >> y;

	std::cout << std::endl;

	return Point(x, y);
}

double CalculateDistance(Point A, Point B)
{
	return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

int main()
{
	Point A = EnterPoint("A");
	Point B = EnterPoint("B");

	std::cout << "Distance between A and B is: " << CalculateDistance(A, B);

	getchar();
	getchar();
}
#include <iostream>

#include "Point.h"
#include "helpers.h"

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

Point EnterPoint(const char* point_name)
{
	double x, y;

	std::cout << "Введіть точку " << point_name << ":" << std::endl;

	x = EnterDecimal("x");

	y = EnterDecimal("y");

	std::cout << std::endl;

	return Point(x, y);
}
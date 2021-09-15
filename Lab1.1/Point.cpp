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
	if (point_name == "")
	{
		std::cout << "Введіть точку:" << std::endl;
	}
	else
	{
		std::cout << "Введіть точку " << point_name << ":" << std::endl;
	}

	double x = EnterDecimal("x");
	double y = EnterDecimal("y");

	std::cout << std::endl;

	return Point(x, y);
}
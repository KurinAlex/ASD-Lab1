#include <iostream>
#include <windows.h>

#include "Lab1.2.h"

bool IsOnXAxis(Point point)
{
	return point.y == 0.0;
}

bool IsOnYAxis(Point point)
{
	return point.x == 0.0;
}

int main()
{
	SetConsoleOutputCP(1251);

	Point point = EnterPoint("");

	bool isOnXAxis = IsOnXAxis(point);
	bool isOnYAxis = IsOnYAxis(point);

	if (isOnXAxis && isOnYAxis)
	{
		std::cout << "Точка є центром координат";
	}
	else if (isOnXAxis)
	{
		std::cout << "Точка лежить на вісі Ox";
	}
	else if (isOnYAxis)
	{
		std::cout << "Точка лежить на вісі Oy";
	}
	else
	{
		std::cout << "Точка не лежить на жодній координатній вісі";
	}

	std::cin.get();
}
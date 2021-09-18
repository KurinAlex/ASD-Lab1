#include <iostream>

#include "helpers.h"

double EnterDecimal(const char* decimal_name)
{
	double number;

	bool isFailure = true;
	do
	{
		std::cout << "\tВведіть " << decimal_name << ": ";
		std::cin >> number;
		isFailure = std::cin.fail();

		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	} while (isFailure);

	return number;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

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

double* GenerateArray(int array_size, double interval_from, double interval_to)
{
	srand(time(0));

	double* array = new double[array_size];
	double scale = (double)(interval_to - interval_from) / RAND_MAX;

	for (int i = 0; i < array_size; i++)
	{
		array[i] = interval_from + rand() * scale;
	}

	return array;
}

void OutputArray(double* array, int array_size)
{
	std::cout << "Масив: [ ";
	for (int i = 0; i < array_size; i++)
	{
		std::cout << array[i] << ' ';
	}
	std::cout << "]\n";
}
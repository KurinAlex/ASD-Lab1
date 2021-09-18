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

int* GenerateArray(int array_size)
{
	srand(time(0));

	int* array = new int[array_size];

	for (int i = 0; i < array_size; i++)
	{
		array[i] = rand();
	}

	return array;
}

void OutputArray(int* array, int array_size)
{
	std::cout << "Масив: [ ";
	for (int i = 0; i < array_size; i++)
	{
		std::cout << array[i] << ' ';
	}
	std::cout << "]\n";
}
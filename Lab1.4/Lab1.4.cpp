#include <iostream>
#include <windows.h>

#include "helpers.h"

#define ARRAY_SIZE 16
#define HALF_ARRAY_SIZE (ARRAY_SIZE / 2)
#define INTERVAL_FROM 0.1
#define INTERVAL_TO 0.5

int main()
{
	SetConsoleOutputCP(1251);

	double max = INTERVAL_FROM - INTERVAL_TO;
	double diff;

	double* array = GenerateArray(ARRAY_SIZE, INTERVAL_FROM, INTERVAL_TO);

	for (int i = 0; i < HALF_ARRAY_SIZE; i++)
	{
		diff = array[i] - array[i + HALF_ARRAY_SIZE];
		if (diff > max)
		{
			max = diff;
		}
	}

	OutputArray(array, ARRAY_SIZE);
	std::cout << "Max: " << max;

	delete[] array;

	std::cin.get();
}
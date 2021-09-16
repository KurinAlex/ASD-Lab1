#include <iostream>
#include <windows.h>

#include "helpers.h"

#define ARRAY_SIZE 16
#define HALF_ARRAY_SIZE (ARRAY_SIZE / 2)

int main()
{
	SetConsoleOutputCP(1251);

	int max = -RAND_MAX;
	int diff;

	int* array = GenerateArray(ARRAY_SIZE);

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
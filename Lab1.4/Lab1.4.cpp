#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

#define ARRAY_SIZE 16

int main()
{
	SetConsoleOutputCP(1251);

	srand(time(0));

	int array[ARRAY_SIZE];
	int half_size = ARRAY_SIZE / 2;
	int max = -RAND_MAX;
	int diff;

	std::cout << "Масив: [ ";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		array[i] = rand();
		std::cout << array[i] << ' ';
	}
	std::cout << "]\n";

	for (int i = 0; i < half_size; i++)
	{
		diff = array[i] - array[i + half_size];
		if (diff > max)
		{
			max = diff;
		}
	}

	std::cout << "Max: " << max;

	std::cin.get();
}
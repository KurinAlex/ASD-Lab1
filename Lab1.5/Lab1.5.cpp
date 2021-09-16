#include <iostream>
#include <windows.h>

#define RANGE_LEFT_BOUND -3
#define RANGE_RIGHT_BOUND 4
#define STEP 0.5

double f(double x)
{
	return pow(x, 3) - 2 * pow(x, 2) + x - 1;
}

int main()
{
	SetConsoleOutputCP(1251);

	double max = -DBL_MAX;
	double f_x;

	for (double x = RANGE_LEFT_BOUND; x <= RANGE_RIGHT_BOUND; x += STEP)
	{
		f_x = f(x);
		if (f_x > max)
		{
			max = f_x;
		}
	}

	std::cout << "Максимальне значення функції f(x)=x^3-2x^2+x-1 на проміжку [" 
		<< RANGE_LEFT_BOUND << ',' << RANGE_RIGHT_BOUND << "] з кроком " << STEP << ": " << max;

	std::cin.get();
}
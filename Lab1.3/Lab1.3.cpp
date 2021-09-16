#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1251);

	char input[3];
	int iteration_count = 0;

	do
	{
		std::cout << "Введіть 0: ";
		std::cin.getline(input, 3);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(INT_MAX,'\n');
		}
		iteration_count++;
	} while (std::strcmp(input, "0"));

	std::cout << "Ви ввели 0 з " << iteration_count << " спроби";

	std::cin.get();
}
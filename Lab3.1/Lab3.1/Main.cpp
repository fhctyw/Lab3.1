//	Main.cpp
//	Лісничук Арсен
//	Лабораторна робота №3.1
//	Варіант 13

#include <iostream>
#include <cmath>
#include <Windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Вхідні параметри
	double x;
	double A;
	double B;
	// Вихідний параметр
	double y;

	std::cout << "Введіть змінну x = "; std::cin >> x; std::cout << std::endl;

	A = 2 * std::abs(x - 5);

	if (x < -1.0)
	{
		B =pow(sin(x), 2) / (1 + abs(cos(x)));
	}

	if (x >= -1.0 && x <= 1.0)
	{
		B = pow(1 / abs(x + 2), 2);
	}
	
	if (x > 1)
	{
		B = log(abs(x + 2));	
	}

	y = A - B;

	std::cout << "Розгалуження в короткій формі" << std::endl;
	std::cout << "y = " << y << std::endl;
	
	if (x < -1.0)
	{
		B = pow(sin(x), 2) / (1 + abs(cos(x)));
	}
	else
	{
		if (x > 1)
		{
			B = log(abs(x + 2));
		}
		else
		{
			B = pow(cos(1 / abs(x + 2)), 2);
		}
	}

	std::cout << "Розгалуження в повній формі" << std::endl;
	std::cout << "y = " << y << std::endl;



	return 0;
}
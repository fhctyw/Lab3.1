//	Main.cpp
//	˳������ �����
//	����������� ������ �3.1
//	������ 13

#include <iostream>
#include <cmath>
#include <Windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ����� ���������
	double x;
	double A;
	double B;
	// �������� ��������
	double y;

	std::cout << "������ ����� x = "; std::cin >> x; std::cout << std::endl;

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

	std::cout << "������������ � ������� ����" << std::endl;
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

	std::cout << "������������ � ����� ����" << std::endl;
	std::cout << "y = " << y << std::endl;



	return 0;
}
// Lab_03_1.cpp
// Головата Соломія 
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 5

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу

	cout << "x = "; cin >> x;

	A = (1 / (abs(x + 2)) + 1) ; 

		//  розгалуження в скороченій формі

		if (x < 1)
			B = -(7 * pow((x), 2) + x - 8);
		if (1 <= x && x <= 4)
		   B = -(((1/tan) * (x + 4)) / sqrt(11)) + 3;
		if (x > 4)
		   B = -(sqrt(1 + abs(pow(cos(x), 3))));

	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;

	//  розгалуження в повній формі
	if (x < 0)
	B = -(7 * pow((x), 2) + x - 8);
	else 
		if (x > 1)
			B = -(((1/tan) * (x + 4)) / sqrt(11)) + 3;
		else
			B = -(sqrt(1 + abs(pow(cos(x), 3))));

	y = A + B;

	cout << endl;
	cout << " 2) y = " << y << endl;

	system("pause");
	return 0;
}

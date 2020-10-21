//Project3.1.cpp
//Михайлов Олександр
//Розгалуження, задане формулою: функція однієї змінної.
//Варіант 19
#include <iostream>
#include <CMATH>

using namespace std;

int main()
{
	double x, y, A, B;

	cout << "x = "; cin >> x;
	A = 2 * x - 13, 5;

	// спосіб 1: розгалуження в скороченій формі
	if (x < -1) 
		B = sin(x) / (1 + cos(x) * cos(x));
	if (x >= -1 && x <= 1)
		B = cos(sin(x) * sin(x)) * cos(sin(x) * sin(x)) - 1;
	if (x > 1)
		B = log10(x + 0.4);

	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;

	// спосіб 2: розгалуження в повній формі
	if (x < -1)
		B = sin(x) / (1 + cos(x) * cos(x));
	else 
		if (x >= -1 && x <= 1)
			B = cos(sin(x) * sin(x)) * cos(sin(x) * sin(x)) - 1;
		else
			B = log10(x + 0.4);

	y = A - B;
	cout << endl;
	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}
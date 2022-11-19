#include <iostream>
using namespace std;

double pow(double x, int y)
{
	double c = 1;
	for (int i = 0; i < y; i++)
	{
		c *= x;
	}
	return c;
}

double fact(int n) {
	double ans = 1;
	for (int i = 1; i <= n; i++) {
		ans *= i;
	}
	return ans;
}

double sin(double x) {
	double ans = 0.0;
	int a = 1;
	for (int i = 1; i < 80; i++) {
		ans += (pow(x, (2 * i - 1)) / fact(2 * i - 1)) * a;
		a = a * -1;
	}
	return ans;
}

double cos(double x) {
	double ans = 0.0;
	int a = 1;
	for (int i = 1; i < 80; i++) {
		ans += (pow(x, (2 * i - 2)) / fact(2 * i - 2)) * a;
		a = a * -1;
	}
	return ans;
}


int main()
{
	cout << "Addition: 1 \nSubtraction: 2 \nMultiplication: 3 \nDivision: 4 \nExponentiation: 5 \nSine of: 6 \nCosine of: 7 \nTangent of: 8" << endl;
	cout << "Enter the code for your operation: ";
	int in;
	cin >> in;




	if (in == 1)
	{
		cout << "Enter two integers: ";
		int a, b;
		cin >> a >> b;
		int c = a + b;
		cout << endl;
		printf("The sum is %d", c);
	}

	else if (in == 2)
	{
		cout << "Enter two integers: ";
		int a, b;
		cin >> a >> b;
		int c = a - b;
		cout << endl;
		printf("The difference is %d", c);
	}

	else if (in == 3)
	{
		cout << "Enter two integers: ";
		int a, b;
		cin >> a >> b;
		int c = a * b;
		cout << endl;
		cout << "The product is " << c;
	}

	else if (in == 4)
	{
		cout << "Enter two integers :";
		int a, b;
		cin >> a >> b;
		int c = a / b;
		cout << endl;
		cout << "The quotient is " << c;
	}

	else if (in == 5)
	{
		cout << "Enter two integers: ";
		int a, b;
		cin >> a >> b;
		int c = 1;
		for (int i = 0; i < b; i++)
		{
			c *= a;
		}
		cout << endl;
		cout << a << " raised to the power " << b << " is " << c << endl;
	}

	else if (in == 6)
	{
		cout << "Enter a real number(angle in radians) ";
		double x;
		cin >> x;
		cout << sin(x);
	}

	else if (in == 7)
	{
		cout << "Enter a real number(angle in radians) ";
		double x;
		cin >> x;
		cout << cos(x);
	}

	else if (in == 8)
	{
		cout << "Enter a real number(angle in radians) ";
		double x;
		cin >> x;
		cout << sin(x) / cos(x);
	}

	else
	{
		cout << "Invalid code";
	}



	return 0;
}

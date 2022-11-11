// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
		double ans = (16 * x * (3.141592654 - x)) / (5 * 3.141592654 * 3.14159 - 4 * x * (3.141592654 - x)); //Bhaskara I approximation
		cout << "The sine is " << ans;
	}

	else if (in == 7)
	{
		cout << "Enter a real number(angle in radians) ";
		double x;
		cin >> x;
		double ans = (3.141592654*3.141592654 - 4*x*x)/(3.141592654 * 3.141592654 + x*x); //Bhaskara I approximation
		cout << "The cosine is " << ans;
	}

	else if (in == 8)
	{
		cout << "Enter a real number(angle in radians) ";
		double x;
		cin >> x;
		if (x * x <= 1)
		{
			double ans = x + (pow(x, 3) / 3) + (2 * pow(x, 5) / 15) + (17 * pow(x, 7) / 315); //Maclaurin series
			cout << "The tangent is " << ans;
		}
		else
		{
			double ans = 1.57 - (1 / x) + (1 / (3 * pow(x, 3))) - (1 / (5 * pow(x, 5)));
			cout << "The tangent is " << ans;
		}
	}

	else
	{
		cout << "Invalid code";
	}



	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

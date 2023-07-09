#include "calc.h"

double add(double a, double b)
{
	return a + b;
}

double sub(double a, double b)
{
	return a - b;
}

double mul(double a, double b)
{
	return a * b;
}

double div(double a, double b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error: Division by zero\n");
        return 0.00;
	}

}

double expo(double a, double b)
{
	return pow(a, b);
}
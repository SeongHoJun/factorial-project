#include <stdio.h>

double factorial_rec(double n)
{
	if (n <= 1)
		return(1);
	else
		return (n * factorial_rec(n - 1));
}

double factorial_iter(double n)
{
	double v = 1;
	for (double i = 2; i <= n; i++)
		v = v * i;
	return v;
}

int main()
{
	double result_rec = factorial_rec(20);
	double result_iter = factorial_iter(20);

	printf("Iterative factorial result: %f\n", result_iter);
	printf("Recursive factorial result: %f\n", result_rec);
}
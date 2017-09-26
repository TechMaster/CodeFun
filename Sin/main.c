#include <stdio.h>
#include <stdlib.h>
double sine(double x, int n);
int main()
{
		const double pi = 3.14156178;
		double result = sine(pi / 6.0, 100);
		printf("%1.5f", result);
    return 0;
}

double sine(double x, int n) {
	double sinx = 0;
	double xPower = x;
	long factorial = 1;

	for (int i = 0; i <= n; i++) {
			int oneOrMinusOne = 1;
			if (i % 2 == 1) {
				oneOrMinusOne = -1;
			}
		sinx += oneOrMinusOne * xPower / factorial;
		xPower = xPower * x * x;
		factorial = factorial * (2 * i + 2) * (2 * i + 3);
	}
	return sinx;
}

#include <stdio.h>
#include <stdlib.h>

double cosine(double x, int n);  //forward declaration, khai bao truoc

int main()
{
    const double pi = 3.14158;
    double x = pi / 6.0;
    double result = cosine(x, 5);
    printf("%1.5f", result);

    return 0;
}

double cosine(double x, int n) {
	double cosinx = 0;
	double xPower = 1;
	double factorial = 1;

	for (int i = 0; i < n; i++) {
			int oneOrMinusOne = 1;
			if (i % 2 == 1) {
				oneOrMinusOne = -1;
			}

			cosinx = cosinx + oneOrMinusOne * xPower / factorial;
			xPower = xPower * x * x;
			factorial = factorial * (2 * i + 1) * (2 * i + 2);
	}

	return cosinx;
}

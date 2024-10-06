#include <locale.h>
#include <stdio.h>
#include <math.h>


void main() {
	float x, y, k=7, a, b;
	scanf("%f", &x);
	a = pow(k + x, 3);
	b = log10(fabs(k * x));
	y = pow(b, 2) + sqrt(fabs(a));
	printf("%.3f", y);

}
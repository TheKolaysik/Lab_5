#include <locale.h>
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846


void main() {
	float gr;
	scanf("%f", &gr);
	gr = gr * M_PI / 180;
	printf("%.6f", sin(gr));
}
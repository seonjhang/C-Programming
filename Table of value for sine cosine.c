#include <stdio.h>
#include <math.h> // math.h has sin() & cos()

int main()
{
	float value;

	printf("Enter a value between 0 and 1: ");
	scanf_s("%f", &value);

	for (float i = 0; i <= 1; i = i + value)
		printf("sin(%f)=%f\tcos(%f)=%f\n", i, sin(i), i, cos(i));

	return 0;
}
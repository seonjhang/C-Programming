#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */

int main(void)
{
	double interval;
	int i;
	for (i = 0; i < 30; i++)
	{
		interval = i / 10.0;
		printf("sin(%f) = %f \t", interval, fabs(sin(interval))); // abs() only works for int type so change to fabs()
	}

	printf("\n++++++ + \n");
	return 0;
}
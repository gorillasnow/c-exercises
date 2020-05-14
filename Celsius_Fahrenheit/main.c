#include <stdio.h>

	int main() 
	{
		float celsius, fahrenheit;
		float lower, step, upper;

		lower = 0;
		step = 5;
		upper = 100;

		celsius = lower;
		while(celsius <= upper) {

			fahrenheit = celsius * (9.0/5.0) + 32.0;
			printf("%6.1f\t%6.1f\n", celsius, fahrenheit);
			celsius = celsius + step;
		}
	}


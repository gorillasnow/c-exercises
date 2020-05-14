#include <stdio.h>

/* print Fahrenheit-Celsiu table
   for fahr = 0, 20, ..., 300 */

	int main ()
	{
		float fahr, celsius, kelvin;
		float lower, upper, step;

		lower = 0;      /* lower limit of temperature scale */
		upper = 300;	/* upper limit */
		step = 20;      /* step size */
		
		printf("  F\t     C\t     K\n");
		fahr = lower;
		while (fahr <= upper) {
			celsius = (5.0/9.0) * (fahr-32.0);
			kelvin = celsius - 273.15;
			printf("%3.0f\t%6.1f\t%6.1f\n", fahr, celsius, kelvin);
			fahr = fahr + step;
		}
	}

#include <stdio.h>

/* print Celsius-Fahrenheit table
   for celsius  = -20, -15, -10, ... 145, 150 */

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -20;	/* lower limit of temperature table */
	upper = 150;	/* upper limit */
	step = 5;

	celsius = lower;

	printf("%6s %3s\n", "C", "F");
	printf("------ ---\n");

	while (celsius <= upper) {
		fahr = ((9.0 / 5.0) * celsius) + 32.0;
		printf("%6.1f %3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

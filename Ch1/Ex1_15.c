#include <stdio.h>

float FahrToCelsius(float fahr)
{
	return (5.0 / 9.0) * (fahr - 32.0);
}

float CelsiusToFahr(float celsius)
{
	return ((9.0 / 5.0) * celsius) + 32.0;
}

main()
{
	printf("%f degrees Fahrenheit = %f degrees Celsius\n", 32.0, FahrToCelsius(32.0));
	printf("%f degrees Fahrenheit = %f degrees Celsius\n", 212.0, FahrToCelsius(212.0));

	printf("%f degrees Celsius = %f degrees Fahrenheit\n", 0.0, CelsiusToFahr(0.0));
	printf("%f degrees Celsius = %f degrees Fahrenheit\n", 100.0, CelsiusToFahr(100.0));
}

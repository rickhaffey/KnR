#include <stdio.h>
/*
// approach 1 - using long int
main()
{
	long nc;
	nc = 0;

	while(getchar() != EOF)
	{
		++nc;
	}

	printf("%ld\n", nc);
}

*/

main()
{
	double nc;

	for(nc = 0; getchar() != EOF; ++nc)
		;

	printf("%.0f\n", nc);
}

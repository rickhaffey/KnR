#include <stdio.h>

main()
{
	int c;

	while((c = getchar()) != EOF)
	{
		if(c == '\n') printf("newline\n");
		else printf("char: %d\n", c);
					 
	}
}

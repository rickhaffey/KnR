#include <stdio.h>


main()
{
	int c;

	while((c = getchar()) != EOF)
	{
		if(c == '\t') printf("\\t");
		if(c == '\b') printf("\\b");
		if(c == '\\') printf("\\\\");

		// logical operators and 'else' still not introduced...
		if(c != '\t')
		{
			if(c != '\b')
			{
				if(c != '\\')
					putchar(c);
			}
		}
	}
}

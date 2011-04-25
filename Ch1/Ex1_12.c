#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
	int c;
	int state;
	state = OUT;

	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\t' || c == '\n') 
		{
			if(state == IN)
			{
				state = OUT;
				putchar('\n');
			}
		}
		else
		{
			state = IN;
			putchar(c);
		}

	}
}

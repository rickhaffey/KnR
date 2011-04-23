#include <stdio.h>

main()
{
	int c, lastc;
	lastc = -1;

	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			// && not introduced yet...
			if(lastc != ' ')
			{
				lastc = ' ';
				putchar(c);
			}
		}

		// note: else not introduced yet....
		if(c != ' ')
		{
			lastc = c;
			putchar(c);
		}
	}
}

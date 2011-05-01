#include <stdio.h>

#define MAXLENGTH 1000
#define TABWIDTH 4
#define FILL 'X'

int getline(char line[], int maxlength);

main()
{
	int len;
	char line[MAXLENGTH];
	

	while((len = getline(line, MAXLENGTH)) > 0)
	{
		printf("%s\n", line);
	}
}

int getline(char line[], int maxlength)
{
	int c = 0;
	int i = -1;
	int tmp = 0;

	while(c != '\n' && (c = getchar()) != EOF)
	{
		if(c == '\t' && ((i + TABWIDTH - 1) < maxlength))
		{
			for(tmp = 0; tmp < TABWIDTH; tmp++)
			{
				line[++i] = FILL;
			}
		}
		else if(i < maxlength)
		{
			line[++i] = c;
		}
	}

	line[++i] = '\0';

	return i;
}

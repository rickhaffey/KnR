#include <stdio.h>

#define MAXLENGTH 1000
#define TABSTOP 4
#define TAB '\t'
#define SPACE ' '

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
	int spacecount = 0;

	while(c != '\n' && (c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			++spacecount;
		}
		else if(i < maxlength)
		{
			while(spacecount > 0 && i < maxlength)
			{
				if(spacecount >= TABSTOP)
				{
					line[++i] = TAB;
					spacecount = spacecount - TABSTOP;
				}
				else
				{
					line[++i] = SPACE;
					spacecount = spacecount - 1;
				}
			}

			spacecount = 0;

			if(i < maxlength)
			{
				line[++i] = c;
			}
		}
	}

	line[++i] = '\0';

	return i;
}

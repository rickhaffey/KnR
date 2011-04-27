#include <stdio.h>

#define MAXLENGTH 5

int getline(char line[], int maxlength);

main()
{
	int len;
	char line[MAXLENGTH];

	while((len = getline(line, MAXLENGTH)) > 0)
	{
		printf("Length: %d -- %s\n", len, line);
	}

	return 0;
}

int getline(char line[], int maxlength)
{
	int c = 0;
	int length = 0;

	while(c != '\n' && (c = getchar()) != EOF)
	{
		if(++length < maxlength)
		{
			line[length - 1] = c;
			line[length] = '\0';
		}
	}

	// null terminate the string
	if(length > maxlength - 1)
		line[maxlength - 1] = '\0';

	return length;
}

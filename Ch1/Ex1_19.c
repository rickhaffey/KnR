#include <stdio.h>

#define MAXLENGTH 1000

int getline(char line[], int maxlength);
void reverse(char from[], char to[]);

main()
{
	int length;
	char line[MAXLENGTH];
	char rev[MAXLENGTH];

	while((length = getline(line, MAXLENGTH)) > 0)
	{
		reverse(line, rev);
		printf("%s\n", rev);
	}
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

void reverse(char from[], char to[])
{
	int i;
	int index = -1;

	// find the null terminator
	for(i = 0; i < MAXLENGTH && index == -1; i++)
	{
		if(from[i] == '\0')
			index = i;
	}

	for(i = 0; i < index; i++)
	{
		to[i] = from[index - i - 1];
	}

	to[i] = '\0';
}

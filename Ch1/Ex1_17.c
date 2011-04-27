#include <stdio.h>

#define MINLENGTH 80
#define MAXLENGTH 1000


int getline(char line[], int maxlength);

main()
{
	char line[MAXLENGTH];
	int length;

	while((length = getline(line, MAXLENGTH)) > 0)
	{
		if(length > MINLENGTH)
			printf("length: %d == >> %s <<\n", length, line);
	}
}


int getline(char line[], int maxlength)
{
	int c = 0;
	int length = 0;

	// let's leave the newline character out of the returned string
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

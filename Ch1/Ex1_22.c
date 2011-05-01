#include <stdio.h>

#define MAXLENGTH 1000
#define LINELENGTH 80


int getline(char line[], int maxlength);
void insertNewline(char line[], int start, int end);

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
	int i = 0;
	int lastspace = -1;
	int currentLength = 0;
	int totalLength = 0;

	while(c != '\n' && (c = getchar()) != EOF && totalLength < maxlength)
	{
		++totalLength;
		++currentLength;
		
		if(currentLength > LINELENGTH)
		{
			insertNewline(line, lastspace, totalLength);
		}

		
		
	}
}


void insertNewline(char line[], int start, int end)
{
	// precondition: end must be less than MAXLENGTH
	for(i = end; i > start; i--)
	{
		line[i + 1] = line[i];
	}

	line[start] = '\n';
}

#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX 128

main()
{
	int histogram[MAX + 1];

	int c;
	int i, j;

	// initialize the histogram array
	for(i = 0; i < MAX + 1; i++)
		histogram[i] = 0;

	// capture user input and store word lengths
	while((c = getchar()) != EOF)
	{
		histogram[c]++;
	}

	// display the results
	for(i = 1; i <= MAX; i++) 
	{ 
		printf("%c: ", i); 
		for(j = 1; j <= histogram[i]; j++) 
			printf("*"); 
		printf("\n"); 
	} 

}

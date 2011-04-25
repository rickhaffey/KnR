#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX 30

main()
{
	int histogram[MAX + 1];

	int c, state, length;
	int i, j;
	state = OUT;
	length = 0;


	// initialize the histogram array
	for(i = 0; i < MAX + 1; i++)
		histogram[i] = 0;

	// capture user input and store word lengths
	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t')
		{
			if(state == IN)
			{
				state = OUT;
				if(length <= MAX)
				{
					histogram[length]++;
				}

				length = 0;
			}
		}
		else
		{
			state = IN;
			length++;
		}
	}

	// display the results
	for(i = 1; i <= MAX; i++) 
	{ 
		printf("%3d: ", i); 
		for(j = 1; j <= histogram[i]; j++) 
			printf("*"); 
		printf("\n"); 
	} 

}

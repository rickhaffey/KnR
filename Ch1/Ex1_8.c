#include <stdio.h>

main()
{
	// count blanks, tabs, and newlines
	int c;
	int blanks, tabs, newlines;   // assumes small input amounts

	blanks = tabs = newlines = 0;

	while((c = getchar()) != EOF)
	{
		if(c == '\n') ++newlines;
		if(c == '\t') ++tabs;
		if(c == ' ') ++blanks;
	}

	printf("blanks: %d\n", blanks);
	printf("tabs: %d\n", tabs);
	printf("newlines: %d\n", newlines);
}

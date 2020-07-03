#include <stdio.h>

/*Count spaces, tabs, and new lines  in input*/
int main()
{
	int spaces = 0;
	int lines = 0;
	int tabs = 0;
	int currentChar = 0;
	while ((currentChar = getchar()) != EOF) {

		if (currentChar == ' ') {
			++spaces;
		}
		if (currentChar == '\t') {
			++tabs;
		}
		if (currentChar == '\n') {
			++lines;
		}
	}

	printf("\nSpaces: %d\nTabs: %d\nLines: %d\n", spaces, tabs, lines);
}

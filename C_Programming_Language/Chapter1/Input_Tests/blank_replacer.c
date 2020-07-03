#include <stdio.h>

int main() 
{
	char current_char = 'a';
	char prev_char = 'a';
	while ((current_char = getchar()) != EOF)
	{
		if (current_char == ' ') {
			if (prev_char != ' ') {
				putchar(current_char);
			}
		}
		else {
			putchar(current_char);
		}
		prev_char = current_char;
	}
}


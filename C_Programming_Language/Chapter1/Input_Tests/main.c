#include <stdio.h>

int main()
{
	int c;

	/*Prints input until ctrl+D is pressed
	while ((c=getchar()) != EOF) 
	{
		putchar(c);
	} */

	c = getchar();
	printf("%d\n", c != EOF); 

	//printf("%d\n",EOF); prints -1
}

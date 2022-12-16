#include <stdio.h>
#include <string.h>

/*
 * A function that uses puts to output a string
 */

int main(void)
{
	char str[52];

	strcpy (str, "\"Programming is like building a multilingual puzzle");
	puts(str);

	return(0);
}

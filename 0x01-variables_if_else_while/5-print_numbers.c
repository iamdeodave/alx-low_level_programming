/**
 * main - main block
 * description - prints all single digits numbers of base 10
 * sytarting from 0, followed by a new line
 * return 0
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	char c = '0';
	while (c <= '9'){
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

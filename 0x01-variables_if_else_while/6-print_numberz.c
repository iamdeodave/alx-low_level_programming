/**
 * main - main block
 * description - prints all single digit numbers of base 10
 * starting from 0, folowed by a new line.
 * return: 0
 */
#include <stdio.h>
int main(void){
	int c = 0;
	while (c < 10){
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}

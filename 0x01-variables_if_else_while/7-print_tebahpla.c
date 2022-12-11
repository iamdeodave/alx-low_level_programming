/**
 * main - main block
 * description: prints all single digit numbers of base 10 starting from 0, followed by a new line
 * return 0
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
	char c = 'z';
	while (c >= 'a'){
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

/**
 * main - entry point
 * description - prints all single digits numbers of base 10
 * starting from 0, followed by a new line
 * return: 0
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
	char ch;

	for (ch = '0'; ch <= '9'; ch++){
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++){
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

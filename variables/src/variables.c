/*
 ============================================================================
 Name        : variables.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i = 16;

	printf("The number is %d. The size is %ld\n", i, sizeof(i));

	char c = 'a';
	printf("The character is %c, the numeric vaulue is %d, The size is %ld\n", c, c, sizeof(c));

	unsigned int u = 6;
	printf("The number is %u, the size is %ld\n", u, sizeof(u));

	return EXIT_SUCCESS;
}

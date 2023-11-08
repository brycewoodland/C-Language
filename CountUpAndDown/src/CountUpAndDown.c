/*
 ============================================================================
 Name        : CountUpAndDown.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i = 0;

	for (i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
	}

	for (i = 10; i >= 1; i--)
	{
		printf("%d\n", i);
	}
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : functionPointer.c
 Author      : Bryce Woodland
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void add_three(int x)
{
	x += 3;
	printf("The new number: %d\n", x);
}

void add_three_pointer(int* x)
{
	*x += 3;
}

int main(void) {
	int x = 1;

	printf("Enter a number: ");
	scanf("%d", &x);
	add_three(x);
	printf("The original number: %d\n", x);

	add_three_pointer(&x);
	printf("The value changed: %d\n", x);

	return EXIT_SUCCESS;
}

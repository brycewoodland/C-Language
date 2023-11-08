/*
 ============================================================================
 Name        : arrayWith10Values.c
 Author      : Bryce Woodland
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// Declare an array to hold 10 floating point numbers
	float myNumbers[10];

	float min = 0;
	float max = 0;
	float sum = 0;

	// Have user input 10 values using loop
	for (int i = 0; i < 10; i++)
	{
		printf("Enter a number: ");

		scanf("%f", &myNumbers[i]);

		sum = sum + myNumbers[i];

		if (i == 0) {
			min = myNumbers[i];
			max = myNumbers[i];
		}
		else
		{
			if (myNumbers[i] < min)
			{
				min = myNumbers[i];
			}
			if (myNumbers[i] > max)
			{
				max = myNumbers[i];
			}
		}
	}

	float average = sum / 10;

	printf("The Minimum is %f\n", min);
	printf("The Maximum is %f\n", max);
	printf("The Average is %f\n", average);

	return EXIT_SUCCESS;
}

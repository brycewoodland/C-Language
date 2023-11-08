/*
 ============================================================================
 Name        : CSE.c
 Author      : Bryce Woodland
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// Create an integer variable
	int myNum = 0;

	// Ask the user to input a number
	printf("Type a number: ");

	// Get and save the number the user types
	scanf("%d", &myNum);

	// Output the number that the user entered
	printf("Your number is: %d\n", myNum);

	// create a floating variable
	float n = 0;

	// Ask the user to input float number
	printf("Enter a float value: ");

	// Get and save the floating number the user entered
    scanf("%f", &n);

    // Output the float number the user entered
	printf("Your floating number: %e %f %g\n", n, n, n);

	//create an array variable
	char name[15];

	// Ask the user to input a name
	printf("Enter a name: ");

	// Get and save the name the user entered
	scanf("%s", name);

	// Output the name the user entered
	printf("The value is now %s\n", name);

	// Define two integer variables
	int var1 = 0;
	int var2 = 0;

	// Ask the user to input two variables
	printf("Please enter two variables: ");

	// Get and save the two numbers as variables
 	scanf("%d", &var1);
	scanf("%d", &var2);

	// Use if else statements to determine minimum value
	if (var1 > var2)
	{
		// Determines if var2 is the minimum value
		printf("%d is the minimum value of the two variables\n", var2);
	}
	else
	{
		// Determines if var1 is the minimum value
		printf("%d is the minimum value of the two variables\n", var1);
	}

	return EXIT_SUCCESS;
}

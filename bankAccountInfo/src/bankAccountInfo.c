/*
 ============================================================================
 Name        : bankAccountInfo.c
 Author      : Bryce Woodland
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// First, create a type struct with the following information
typedef struct bank
{
	int accountNumber; // account # as int
	char name[20]; // name as string
	float balance; // balance as float
} bank_t;

// First function allows user to input information about account
void accountInfo(bank_t *bank) // pointer to structure as parameter
{
	printf("Enter Account Number: ");
	scanf("%d", &bank->accountNumber);

	printf("Enter your name: ");
	scanf("%s", bank->name);

	printf("Enter total balance: ");
	scanf("%f", &bank->balance);
}

void displayInfo(bank_t *bank)
{
	printf("Account Information: number %d name %s balance $%.2f", bank->accountNumber, bank->name, bank->balance);
}

int main(void)
{
	bank_t b;

	accountInfo(&b);
	displayInfo(&b);

	return EXIT_SUCCESS;
}

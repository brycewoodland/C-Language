/*
 ============================================================================
 Name        : bank.c
 Author      : Bryce Woodland
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct bank
{
	int accountNumber;
	char name[20];
	float balance;
} bank_t;

void accountInfo(struct bank_t *bank)
{
	printf("Enter Account Number: ");
	scanf("%d", &bank->acccountNumber);

	printf("Enter your name: ");
	scanf("%c", bank->name);

	printf("Enter total balance: ");
	scanf("%f", &bank->balance);
}

int main(void) {
	bank_t b;
	b.accountNumber;
	b.name;
	b.balance;
	return EXIT_SUCCESS;
}

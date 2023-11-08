/*
 ============================================================================
 Name        : bankContinue.c
 Author      : Bryce Woodland
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// First, create a type struct with the following information
struct account
{
	char name[20]; // name as string
	int account_number; // number as integer
	float balance; // balance as float
	struct account *next;
};

// First function allows user to input information about account
void account_information(struct account *acc) // pointer to structure as parameter
{
	printf("Enter your name: ");
	scanf("%s", acc->name);

	printf("Enter your account number: ");
	scanf("%d", &acc->account_number);

	printf("Enter total balance: ");
	scanf("%f", &acc->balance);

	acc->next = NULL;
}

void display_info(struct account *acc)
{
	printf("Account Information: number %d name %s balance $%.2f\n", acc->account_number, acc->name, acc->balance);
}

void display_all_information(struct account *acc)
{
	struct account *a = acc;
	while (a != NULL)
	{
		display_info(a);
		a = a->next;
	}
}

int main(void)
{
	struct account *acc = malloc(sizeof(struct account));
	acc->next = NULL;
	account_information(acc);

	struct account *acc2 = malloc(sizeof(struct account));
	acc2->next = NULL;
	account_information(acc2);
	acc->next = acc2;

	struct account *acc3 = malloc(sizeof(struct account));
	acc3->next = NULL;
	account_information(acc3);
	acc2->next = acc3;

	display_all_information(acc);

	return EXIT_SUCCESS;
}

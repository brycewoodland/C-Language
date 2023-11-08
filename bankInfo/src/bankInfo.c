/*
 ============================================================================
 Name        : bankInfo.c
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
void account_information(struct account *new_account) // pointer to structure as parameter
{
	printf("Enter your name: ");
	scanf("%s", new_account->name);

	printf("Enter your account number: ");
	scanf("%d", &new_account->account_number);

	printf("Enter total balance: ");
	scanf("%f", &new_account->balance);
}

// displays one single account and it's information
void display_info(struct account *acc)
{
	printf("Account number: %d name: %s balance: $%.2f\n", acc->account_number, acc->name, acc->balance);
}

// function that displays the information for each account made
void display_all_information(struct account *head)
{
	struct account *a = head;
	while (a != NULL)
	{
		display_info(a);
		a = a->next;
	}
}

struct account *find_account(struct account *head, int account_number)
{
	struct account *a = head;
	while (a != NULL)
	{
		if (a->account_number == account_number)
		{
			return a;
		}
		a = a->next;
	}
	return NULL;
}

int main(void)
{
	struct account *head = NULL;
	struct account *tail = NULL;
	struct account *new_account = NULL;

	int account_number = 0;


	while (1)
	{
		printf("Main menu:\n");
		printf("1. Add account\n");
		printf("2. Display all accounts\n");
		printf("3. Find account\n");
		printf("4. Change account\n");
		printf("0. Quit program\n");

		int choice = -1;
		printf("Your choice: ");
		scanf("%d", &choice);


		switch (choice)
		{
			case 1:
				new_account = malloc(sizeof(struct account));
				new_account->next = NULL;
				account_information(new_account);

				if (head == NULL)
				{
					head = new_account;
					tail = new_account;
				}
				else
				{
					while (tail->next != NULL)
					{
						tail = tail->next;
					}
					tail->next = new_account;
				}
				break;
			case 2:
				display_all_information(head);
				break;
			case 3:
				printf("Enter the account number to find: ");
				scanf("%d", &account_number);

				struct account *found_account = find_account(head, account_number);
				if (found_account != NULL)
				{
					printf("Found account: ");
					display_info(found_account);
				}
				else
				{
					printf("Account not found.\n");
				}
				break;
			case 4:
				printf("Enter the account number to find: ");
				scanf("%d", &account_number);

				struct account *found_account_two = find_account(head, account_number);
				if (found_account != NULL)
				{
					printf("Found account: ");
					display_info(found_account_two);
					printf("\n");
					printf("Now enter the new account information.\n");
					account_information(found_account_two);
				}
				else
				{
					printf("Account not found.\n");
				}
				break;
			case 0:
				printf("Goodbye!\n");
				return (0);
				break;
			default:
				printf("Invalid choice.\n");
		}
	}
	free(head);

	return EXIT_SUCCESS;
}

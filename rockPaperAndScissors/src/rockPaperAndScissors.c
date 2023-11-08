/*
 ============================================================================
 Name        : rockPaperAndScissors.c
 Author      : Bryce Woodland
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // in order to utilize the random number generator

// function that gets the user input for rock paper or scissors
int get_player_choice()
{
	// initialize the player_choice variable
	int player_choice;

	// print the choices
	printf("Make a choice:\n");
	printf("1. Rock\n");
	printf("2. Paper\n");
	printf("3. Scissors\n");
	printf("4. Exit\n");

	// Tell the user their options and how to input their option correctly
	printf("Enter 1, 2, or 3 (4 to quit): ");

	// grab their input and store it into the variable player_choice
	scanf("%d", &player_choice);

	// code to display what the user chose
	if (player_choice == 1)
	{
		printf("\n");
		printf("You chose rock.\n");
	}
	else if (player_choice == 2)
	{
		printf("\n");
		printf("You chose paper.\n");
	}
	else if (player_choice == 3)
	{
		printf("\n");
		printf("You chose scissors.\n");
	}

	// return the player's decision
	return player_choice;
}

// function to get a random choice from the computer
int get_computer_choice()
{
	//initialize the computer_choice variable
	int computer_choice;

	// get a random number between 1 and 3
	computer_choice = (rand() % 3) + 1;

	// code to display what the computer chose
	if (computer_choice == 1)
	{
		printf("The computer chose rock.\n");
	}
	else if (computer_choice == 2)
	{
		printf("The computer chose paper.\n");
	}
	else
	{
		printf("The computer chose scissors.\n");
	}

	// return the computer_choice
	return computer_choice;
}

// function to determine who won
void determine_winner(int player_choice, int computer_choice)
{
	// if the player_choice is equal to computer_choice then they tied
	if (player_choice == computer_choice)
	{
		printf("You tied!\n");
	}		// player_choice = rock (1) & computer_choice = scissors (3)
	else if ((player_choice == 1 && computer_choice == 3) ||
			// player_choice = paper (2) & computer_choice = rock (1)
			(player_choice == 2 && computer_choice == 1) ||
			// player_choice = scissors (3) & computer_choice = paper (2)
			(player_choice == 3 && computer_choice == 2))
	{
		printf("You win!\n");
	}
	// otherwise tell the user that they lost
	else
	{
		printf("You lose!\n");
	}
}

int main(void)
{
	//Get a random number
	srand(time(NULL));
	//initialize the player's score
	int player_score = 0;
	//initialize the computer's score
	int computer_score = 0;
	//initialize the amount of rounds played
	int rounds_played = 0;

	printf("Welcome to Rock, Paper, and Scissors!\n");

	while (1)
	{
		//call the function to get the user's input
		int player_choice = get_player_choice();

		//if statement that quits program if user enters the number 4
		if (player_choice == 4)
		{
			printf("Goodbye!\n");
			break;
		}
		//otherwise it will then call the get_computer_choice function and stores it as a variable
		int computer_choice = get_computer_choice();
		//calls the determine_winner function to decide who won
		determine_winner(player_choice, computer_choice);

		//if...then statements to decide whether the user, computer, or neither got a point
		if (player_choice == computer_choice)
		{

		}
		else if  ((player_choice == 1 && computer_choice == 3) ||
				 (player_choice == 2 && computer_choice == 1) ||
				 (player_choice == 3 && computer_choice == 2))
		{
			player_score++;
		}
		else
		{
			computer_score++;
		}

		//increases the amount of rounds played
		rounds_played++;

		//displays the scores at the end of each round
		printf("\n");
		printf("Player Score: %d\n", player_score);
		printf("Computer Score: %d\n", computer_score);
		printf("Rounds Played: %d\n", rounds_played);
		printf("\n");
	}

	return EXIT_SUCCESS;
}

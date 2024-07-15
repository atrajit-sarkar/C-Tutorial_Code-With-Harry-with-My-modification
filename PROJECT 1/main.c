/*
Number Guessing Game Project........
Author: Atrajit Sarkar
Date: 14/07/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // Seed the random number generator

    // Generate a random number between 1 and 100
    int random_number = rand() % 100 + 1;
    int no_of_guesses = 0;
    int guessed;

    // printf("Random number between 1 and 100: %d\n", random_number);
    do
    {
        printf("Guess The Number: \n");
        scanf("%d", &guessed);
        if (guessed < random_number)
        {
            printf("You Guessed Lower Value.\n");
        }
        else if (guessed > random_number)
        {
            printf("You Guessed Higher Value.\n");
        }
        else{
            printf("Congrats!!\n");
        }
        no_of_guesses++;

    } while (guessed != random_number);
    printf("You guessed the number correctly.And your number of guesses: %d", no_of_guesses);

    return 0;
}

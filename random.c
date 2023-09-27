#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateNumber() {
    return (rand() % 10) + 1; // Generates a random number between 1 and 10
}

int main(void) {
    srand(time(0)); // Initialize the random number generator

    float n;
    printf("Hello, welcome to the number guesser!\n");
    printf("This game is just me and you guessing your number:\n");

    printf("Please enter a random number between 1 and 10 : ");
    scanf("%f", &n);

    int number = generateNumber();
    int i;

    for (i = 0; i < (int)n; i++) {
        if (number == (int)n) {
            printf("OMG, I guessed it! It is: %d\n", number);
            return 0; // Exit the program
        } else {
            printf("Let's try another time: ");
            scanf("%f", &n);
        }
    }

    printf("Sorry, I couldn't guess your number. It was: %d\n", number);
    return 0;
}
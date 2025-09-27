//guess the number game using do-while loop
#include <stdio.h>
int main() {
    int number, guess, attempts = 0;
    number = 7; // The number to be guessed
    printf("Welcome to the Guess the Number Game!\n");
    printf("I have selected a number between 1 and 10. Can you guess it?\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);
        }
    } while (guess != number);
    return 0;
}
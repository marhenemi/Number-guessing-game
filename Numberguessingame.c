#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


void game(int);
void game(int count) {
    int number, guess, times = 0;

        // initialize randomizer
        srand(time(NULL));
        // generates random number to be guessed
        number = rand() % count;

        printf("Guess the number between 1 and %d.\n", count);

        // do - while loop, until player get right answer
        do
        {
            if (times > 10) {
                printf("\nYou lost!\n");
                break;
            }
            // Players guess...
            scanf("%d", &guess);
                // ... is too high
                if (guess > number) {
                    printf("\nGuess something lower...\n");
                    times++; // add guess times
                }
                // ...is too low
                else if (number > guess) {
                    printf("\nGuess something higher...\n");
                    times++;  // add guess times
            } else {
                printf("Wohoo!! You have guessed the number in %d tried!\n", times); // counts how many times player has guessed
            }
        } while (guess != number);     // let's do this as long as player gets rigth answer
    }


int main()
{
    int count = 100;
    game(count);
   
    return 0;
}
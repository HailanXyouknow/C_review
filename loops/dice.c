#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int guess;
    int total_score=0, correct=0, incorrect=0;

    long t = time(NULL);
    srand(t);
    do {
        int dice1 = rand()%6+1;
        int dice2 = rand()%6+1;
        int sum = dice1 + dice2;
        printf("Computer rolled two dice...Guess the sum\n");
        printf("Enter any <=0 value to terminate\n");
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if(guess <=0) { break; }
        if (sum != guess){
            incorrect++;
            total_score-=5;
            printf("Darn!!! Bad attempt, -5\n");
            printf("Sum was: %d\n", sum);
        } else
        {
            printf("Bravo!! You were correct +10\n");
            correct++;
            total_score+=10;
        }
        printf("\n");
        printf("Total Correct:   %d\n", correct);
        printf("Total Incorrect: %d\n", incorrect);
        printf("Score:           %d\n", total_score);
        printf("\n");

    } while (guess >=0 );

    printf("\nThank you for playing...\n");
}

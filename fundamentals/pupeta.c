#include <stdio.h>

int main() {
    int answer=-1;
    printf("Please enter the number of Pupeta's neighbours: ");
    scanf("%d", &answer);

    if (answer == 0) {
        printf("Sad and will force you to listen to his story, will make you late.");
    } 
    else if (answer == 1) {
        printf("He will ask you to deliver half of the pizza to his only neighbor, you may be late.");
    } 
    else if (answer >=2 && answer <=5) {
        printf("Will have great mood and will be singing song. May crack joke as well. You will get good tips, definitely.");
    } 
    else if (answer ==7) {
        printf("He will be making great drink for his neighbors and will invite you to taste. But will not give you tip.");
    } 
    else if (answer == 6 || answer == 8) {
        printf("Too angry and furious, deliver the pizza and leave ASAP.");
    } 
    else {
        printf("Invalid number of neighbours");
    }
    return 0;
}
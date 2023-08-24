#include <stdio.h>
#include <cs50.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
    srand(time(NULL));
    int x;
    int y;
    int trials = 0;
    x = (rand() %100);
    y = get_int("Guess an integer number from 1 to 100!\n");
    while (x != y){
        if (y > x) {
            trials = trials + 1;
            printf("Sorry, wrong answer. Guess a smaller number.\n");
            y = get_int("Guess again!\n");
        }
        else if (y < x) {
            trials = trials + 1;
            printf("Sorry, wrong answer. Guess a bigger number.\n");
            y = get_int("Guess again!\n");
        }
}
  if (y == x){
        trials = trials + 1;
        printf("CONGRATULATIONS! RIGHT ANSWER! ");
        printf ("You made it in %i\n", trials);
    }
    return 0;

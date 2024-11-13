#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    int guess;
    int counter = 0;
    srand(time(NULL));
    printf("I've thought of a number, 1-100\n");
    int num = rand() % 100 + 1;

    do {
        counter++;
        scanf_s("%d", &guess);
        if (guess > 100 || guess < 1)
            printf("%d is not 1-100\n", guess);
        else if (abs(num - guess) < 2)
            printf("white hot\n");
        else if (abs(num - guess) < 12)
            printf("quite hot\n");
        else if (abs(num - guess) < 30)
            printf("tepid\n");
        else if (abs(num - guess) < 45)
            printf("cool\n");
        else if (abs(num - guess) < 60)
            printf("cold\n");
        else if (abs(num - guess) > 60)
            printf("icy\n");
    } while (guess != num);
    printf("it took you %d guesses.\n", counter);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


int main(int argc, char *argv[])
{
    time_t t;
    printf("\t *** Guess-it starts *** \n");
    srand((unsigned) time(&t));
    int secret_number =  rand() % 100;
    printf("Secret no: %d \n", secret_number);
    int guess_number;
    while (true) {
        printf("---------------------------\n");
        printf("Please enter an integer\n");
        int count = scanf("%d", &guess_number);
        if (!count) {
            fprintf(stderr, "Number has to be composed from digits!\n");
            exit(1);
        }
        if (guess_number == secret_number) {
            printf("U won\n");
            break;
        } else if (guess_number > secret_number) {
            printf("Too big \n");
        } else if (guess_number < secret_number) {
            printf("Too small \n");
        }

    }
    return 0;
}

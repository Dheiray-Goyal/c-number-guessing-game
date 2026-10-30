#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    printf("######## Welcome to number guessing game ########\n");
    
    srand(time(NULL)) ;
    int x = rand() % 101 ;

    int tries = 0 ;
    int n ;
    printf("Enter a whole number less than or equal to 100\n");

    do
    {
        scanf("%d", &n);
        if (n >= 0 && n <= 100)
        {
            tries ++ ;
            if (n < x)
            {
                printf("Higher\n");
                printf("Guess again\n");
            }
            else if(n > x)
            {
                printf("Lower\n");
                printf("Guess again\n");
            }

        }
        else
        {
            printf("Invalid\n");
            continue;
        }

    } while (n != x);

    printf("Congratulations!!!\nYou took %d tries\n", tries);

    return 0;
}
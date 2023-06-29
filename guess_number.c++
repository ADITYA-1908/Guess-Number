#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number,guess,no_guess=1;
    srand(time(0));
    number=rand()%100+1;
    // printf("The number is %d \n",number);
    do{
        printf("Guess the number between 1 to 100 \n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("enter a lower number \n");
        }
        else if(guess<number) 
        {
             printf("enter a higher number \n");
        }
        else
        {
            printf("you have guessed %d attempts \n ",no_guess);
        }
        no_guess++;
    }while(guess!=number);
    return 0;
}
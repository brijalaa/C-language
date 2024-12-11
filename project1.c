
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    
    srand(time(0));

   
    int randomNumber = (rand() % 100) + 1;
    int guesses = 0;
    int guessed;


    do
    {
        printf("guess a number between 1 to 100\n");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
        {
            printf("guess lower number!!\n");
        }
        else if(guessed<randomNumber){
           printf("guess higher number!!\n");}
        guesses++;
    } while (guessed != randomNumber);
    printf("you guessed the number in %d guesses", guesses);

    return 0;
}
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(){
    int num,g;
    int count=1;
    srand(time(0));
    num=rand()%100+1; 
    printf("Welcome to the Number Guessing Game.\n");
    // printf("*****The num is %d*****",num);  
    do
    { 
        printf("Guess a number between 1 to 100 to win:\n");
        scanf("%d", &g);

        if (g<num)
        {
            printf("Wrong Guess!!\nHint:'Try going higher!'\n");
        }
        if (g>num) 
        {
            printf("Wrong Guess!!\nHint:'Try going lower!'\n");
        }
        if(num==g)
        {
            printf("GG!!you guessed it in %d attempts",count);
        }
        count++;
    } while (num!=g);
    
    return 0;
} 
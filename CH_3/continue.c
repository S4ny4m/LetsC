#include <stdio.h> 

int main(){
    printf("Program to show use of break\n");
    int n=1, p=10 ;
    
    while (n<12)

    {
        n++;
        if (n==10000){
            continue;
            printf("GG");
        }
        else{
             printf("The value of n is %d\n",n);
             break;
         }
    }
    
    return 0;
}
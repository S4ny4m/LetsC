#include <stdio.h> 

int main(){
    printf("Program to show use of break\n");
    int n=1, p=10 ;
    
    while (n<12)

    {
        printf("JoDDa %d\n",n);
        n++;
        if (n==10){
            break;

        }
    }
    
    return 0;
}
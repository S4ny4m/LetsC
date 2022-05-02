
#include <stdio.h> 

int main(){
    printf("Program to check wether a number is prime or not.\n");
    printf("Enter n:\n");
    int n,c,a=0;
    scanf("%d", &n);
    for( c=2;c<n;c++)
    {
       if (n%c==0)
       {
         
           printf("NOT PRIME.");
           a=1;
           break;
              
       } 

       
    }
    if (a==0)
    {
        printf("PRIME HAI>");
    }
    return 0;
}
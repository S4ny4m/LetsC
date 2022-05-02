
#include <stdio.h> 

int main(){
    printf("Program to print print factorial of a given num.\n");
    printf("Enter n:\n");
    int n,f=1;
    scanf("%d", &n);
    for( int i=1 ;i<=n;i++)
    {
       f=f*i;
    }
    printf("fact is%d ;",f);
    return 0;
}
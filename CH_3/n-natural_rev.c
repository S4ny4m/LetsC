#include <stdio.h> 

int main(){
    int n;
    printf("Program to write first n natural numbers\n");
    
    printf("Enter the value of n:");
    scanf("%d", &n);
    for ( int i=n; i ; i--)

    {
        printf("%d\n",i);
    }
    
    return 0;
}
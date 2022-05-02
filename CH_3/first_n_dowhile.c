#include <stdio.h> 

int main(){
    printf("Program to write first n natural numbers\n");
    int n,i;
    i=1;
    printf("Enter the value of n:");
    scanf("%d", &n);
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<n+1);
    
    return 0;
}
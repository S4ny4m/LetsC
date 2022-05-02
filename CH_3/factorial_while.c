
#include <stdio.h> 

int main()
{
    int n,f=1,i=1;
    printf("Program to print print factorial of a given num.\n");
    printf("Enter n:\n");
    scanf("%d",&n);
    while (i<=n)
    {
        f=f*i;
        i++;
        /* code */
    }
    
    printf("fact is %d ",f);
    return 0;
}
#include <stdio.h> 

int fact(int a);
int main(){
    printf("Program to print the factorial of a number using recursion.\n");
    int n;
    printf("Enter Number:\n");
    scanf("%d", &n);
    printf("The factorial of %d is %d\n",n,fact(n));
    return 0;
}
int fact(int a){
    int f;
    printf("calculating fact %d\n",a);
    if ((a==0)||(a==1))
    {
        return 1;
    }
    else
    {
        f=a*fact(a-1);
    }
}

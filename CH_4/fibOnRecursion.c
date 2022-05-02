#include <stdio.h> 
int fib(int a);//Fibonacci Series using Recursio

int main(){
    printf("Program using recursion to calculate the nth element of the Fibonacci series\n");
    int n;
    printf("Enter Term no.:\n");
    scanf("%d",&n);
    printf("%dth element of the Fibonacci series is %d\n",n,fib(n));    
    return 0;
}

int fib (int a)
{
    int f;

    if (a<= 1)
        return a;
    else{

        return fib(a-1)+fib(a-2);
    }
}
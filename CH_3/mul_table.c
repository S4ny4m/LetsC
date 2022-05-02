
#include <stdio.h> 

int main(){
    printf("Program to print table of a given number.\n");
    printf("ENter n:\n");
    int n, p=0;
    scanf("%d", &n);
    
    while (p<=10)

    {
        printf("%d * %d == %d\n",n,p,n*p);
        p++;
    }
    
    return 0;
}
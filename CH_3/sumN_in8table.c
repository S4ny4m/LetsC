
#include <stdio.h> 

int main(){
    printf("Program to print sum of num in 8's table.\n");
    // printf("ENter n:\n");
    int n=8, sum=0,i=1 ;
    // scanf("%d", &n);
        
    while (i<=10)

    {   
        sum=sum+(8*i);

        i++;
    }
    printf("sum is %d\n",sum);
    return 0;
}
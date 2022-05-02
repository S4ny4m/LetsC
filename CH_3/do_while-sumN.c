
#include <stdio.h> 

int main(){
    printf("Program to print sum of first n num.\n");
    printf("ENter n:\n");
    int n, sum=0,i=1 ;
    scanf("%d", &n);
    do{
        sum+=i;
        i++;
    }while (i<=n);
        
    
    printf("sum is %d\n",sum);
return 0;
}
#include <stdio.h> 
int sum();

int main(){
    printf("Going to print the sum of two numbers usong functions.\n");
    int a,b,s;
    printf("Enter num:\n");
    scanf("%d", &a);    
    printf("Enter num:\n");    
    scanf("%d", &b);
    // s=sum(a,b);
    printf("Sum is %d",sum(a,b));    
    return 0;
}
int sum(int x,int y)
{
    int s=x+y;
    return s;
}
// A function cannot return multiple values in c ;

#include <stdio.h> 
int sum(int,int);

int main(){
    printf("Going to print the sum of two numbers usong functions.\n");
    int a,b,s;
    char c;
    printf("Enter num:\n");
    scanf("%d", &a);    
    printf("Enter num:\n");    
    scanf("%d", &b);
    s=sum(a,b);
    s,c=sum(a,b);
    printf("%c\n",c);
    printf("Sum is %d%c",sum(a,b));    
    return 0;
}
int sum(int x,int y)
{   
    char c;
    int s=x+y;
    if(s%2==0)
    {
        c='E';
    }
    else
    {
        c='O';
    }
    return c;
}
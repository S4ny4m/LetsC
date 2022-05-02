#include <stdio.h> 
float c2f();
int main(){
    int c;
    printf("Program to cinvert c to f using functions.\n");
    printf("ENter C:");
    scanf("%d", &c);
    printf("%d c in f is %f\n",c,c2f(c));
    return 0;
}
float c2f(int a)
{
        float f;
        f=a*9/5+32;
        return f;    
}

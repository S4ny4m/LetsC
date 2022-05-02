
#include<stdio.h>

int main()
{
    int a=8,b=9,c;
    c=++a-(--b);
    printf("%d\n%d\t%d\n",++c,a++,b++);
    return 0;
}
#include <stdio.h>

int main()
{
    int a=5,b=0;
    b=++a + ++a + ++a;
    printf("%d",b);
return 0;
}
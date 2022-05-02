#include <stdio.h>
// void fun(*a,*b)

void fun(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a, b;
    printf("Enter Var:\n");
    scanf("%d %d", &a, &b);
    printf("Before swaping : \n First var = %d\t Second var = %d\n", a, b);

    fun(&a, &b);
    printf("After swaping : \n First var = %d\t Second var = %d", a, b);
    return 0;
}
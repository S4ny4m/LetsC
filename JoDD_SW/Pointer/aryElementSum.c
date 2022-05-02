#include <stdio.h>
int sum(int *a)
/*(int a[]) or (int *a) noth are same as compiler
passes the adderssof the first element of the arry
not the whole array*/
{
    int s = 0;
    for (int i = 0; i < 5; i++)
    {
        s += *(a + i);
    }
    return s;
}

int main()
{
    int a[5];
    // int sum;
    printf("Enter a arry of 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    // for(int i=0 ;i<5;i++)
    // {
    //     sum+=*(a+i);
    // }
    printf("%d", sum(a));
    return 0;
}
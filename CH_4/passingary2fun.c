#include <stdio.h>
/* We can send
-->the address of the array
-->name of the arry
-->address of the first element of the arry
all of the above can be used to pass an arry to a fun.
*/
void fun1(int *a, int n)
{

    printf("\n");
    int i;
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
}
void fun2(int *a, int n)
{
    printf("\n");
    int i;
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
}
void fun3(int a[], int n)
{
    printf("\n");
    int i;
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
}
void fun4(int a[5],int n)
{
    printf("\n");
    int i;
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
}
int main()
{
    int n;
    printf("Enter size:\n");
    scanf("%d", &n);
    int i, a[n];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int *ptr = a;
    fun1(a, n);
    fun2(ptr, n);
    fun3(a, n);
    fun4(a,n);
    return 0;
}

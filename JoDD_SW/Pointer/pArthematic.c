#include <stdio.h>

int main()
{
    int *p,a[5];
    printf("Enter a arry of 5 numbers:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    //now we are gonna acccess the elements of a using p
    p=&a[0];
    printf("Initially pointer is pointing at 1st element i.e %d\n",*p);
    printf("Now accessing 4 th element using p=p+3\n");
    p=p+3;
    printf("4th element %d",*p);
    printf("printing 3rd element using p=p-1\n");
    p=p-1;.
    printf("3rd element %d",*p);

return 0;
}
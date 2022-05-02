#include <stdio.h>

int main()
{
    int x=5;
    int *ptr;//creting pointer{datatype *PtrNAME}
    ptr=&x;
    printf("Address of Variable x is id %d \n\n\n",ptr);
    printf("Value of ptr id %d \n\n\n",*ptr);
    //changing value of x usinng ptr
    *ptr=10;
    printf("Value of ptr after upgrade is %d ",*ptr);
return 0;
}
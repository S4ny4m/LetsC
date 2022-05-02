#include <stdio.h>

int main()
{
    int x=5;
    int *p,*q;//creting pointer{datatype *PtrNAME}
    p=&x;
    q=p;
    printf("Address stored in\t PTR p %d\t PTR q %d \n\n\n",p,q);
    printf("Value of ptr p,q id %d , %d\n\n\n",*p,*q);
    //changing value of x usinng ptr
    // *ptr=10;
    
return 0;
}
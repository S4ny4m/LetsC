#include <stdio.h>
void fun(int a[5],int *max,int *min)
{
    int i;//using p for greatest in and q for smallest
    *max=*min=a[0];
    for(i=0;i<5;i++)
    {
        if (a[i]>*max)
            *max=a[i];
        if (a[i]<*min)
            *min=a[i];
    }
    

}
int main()
{   //program to find smallest and larget number in an array usinf PTR
    int a[5],max,min;//pfor MAX and q for MIN
    printf("Enter a arry of 5 numbers:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    fun(a,&max,&min);   
    printf("Max=%d , Min=%d \n",max,min);
    // printf("Max stored in = %d , Min stored in = %d\n\n",&max,&min);

    // printf("%d %d",&max,&min);
return 0;
}
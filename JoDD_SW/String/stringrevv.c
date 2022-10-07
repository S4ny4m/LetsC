#include <stdio.h>

int main()
{
    char s1[20];
    gets(s1);
    int l=0,i,temp;

    while(s1[l]!='\0')
   {
        l++;
   } 
    for(i=0;i<l/2;i++)
    {
        temp = s1[i];
        s1[i]=s1[l-i-1];
        s1[l-i-1]=s1[i];
    }
    puts(s1);
    return 0;
}
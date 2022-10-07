#include <stdio.h>

int main()
{
    char s1[20],s2[20];
    int i,l=0;

    gets(s1);
    gets(s2);

    while(s1[l]!='\0')
    {
        l++;
    }
    while(s2[i]!='\0')
    {
        s1[l]=s2[i];
        i++;
        l++;
    }
    s1[l]='\0';
    
    puts(s1);
return 0;
}
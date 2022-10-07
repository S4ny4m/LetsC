#include <stdio.h>
#include<string.h>
//Makung our own Version of strlenn() Function  
int main()
{
    char c[100];
    int len=0,i,len2,len3=0;
    printf("Enter the String :\n");
    gets(c);
    printf("The given string is:  %s\n",c);
    for (i=0;c[i]!='\0';i++)
        len++;  
    
    
    printf("Length = %d\n",len);
    i=0;
    while (c[i]!='\0')
    {
        i++;
    }
    printf("Length = %d\n",i);
    
    len2=strlen(c);
    printf("Length acc to strlen function = %d",len2);
return 0;
}
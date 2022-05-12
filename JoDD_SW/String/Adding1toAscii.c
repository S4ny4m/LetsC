#include <stdio.h>
#include<string.h>
//Encrypting string by adding +1 to Ascii value of Og string; 
int main()
{
    char c[100],d[100];
    int i,j;
    printf("Enter the String :\n");
    scanf("%[^\n]s",c);
    printf("The given string is: %s\n",c);

    
    for (i=0;c[i]!='\0';i++)
    {
        d[i]=(++c[i]);
    }
    printf("New string is: %s\n",d);
return 0;
}
#include <stdio.h>
#include<string.h>
//making own version of strcpy() function.
int main()
{
    char c[100];
    int i,j;
    printf("Enter the String :\n");
    scanf("%[^\n]s",c);
    printf("The given string is: %s\n",c);
    
    printf("Now printing in Spacewise order : ");
    for (i=0;c[i]!='\0';i++)
    {
        printf("%c ",c[i]);
    }
    
    
return 0;
}
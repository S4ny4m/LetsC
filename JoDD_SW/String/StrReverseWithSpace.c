#include <stdio.h>
#include<string.h>

int main()
{
    char c[100];
    int i,count=0;
    printf("Enter the String :\n");
    scanf("%[^\n]s",c);
    printf("The given string is: %s\n",c);
    
    printf("Now printing in Spacewise Reverse order : ");
    // for (i=0;c[i]!='\0';i++)
    // {
    //     count++;
    // }
    for(i=strlen(c);i>=0;i--)
        printf("%c ",c[i]);
    
return 0;
}
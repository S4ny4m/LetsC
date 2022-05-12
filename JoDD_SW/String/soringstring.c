#include <stdio.h>
#include <string.h>
int main()
{
    char c[100],temp;
    int i,j,len;
    
    printf("Enter string :\n");
    fgets(c,100,stdin);
    len=strlen(c);
    for(int i=0;i<len-1;i++)
        for(j=0;j<len-i-1;j++)
        {
            if (c[j]>c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    printf("%s",c);
return 0;
}
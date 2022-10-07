#include <stdio.h>
int main()
{
    int i;
    char s[200],ch;
    FILE *p,*v;
    p = fopen("x.txt","w+");
    v = fopen("value.txt","a+");
    while((ch=getchar())!=EOF)
    {
        putc(ch,p);
    }
    rewind(p);
    fscanf(p,"%c",&ch);
    while((ch!=EOF))
    {
        if(ch == 'a' || ch=='e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            // putc(ch,v);
            printf("%c",ch);
        }
        fscanf(p,"%c",&ch);
    }
    return 0;
}
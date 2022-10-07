#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p, *v, *con;
    p = fopen("sample.txt", "w+");
    con = fopen("x.txt", "w+");
    v = fopen("value.txt", "w+");
    if (v == NULL || p == NULL || con == NULL)
    {
        printf("File NOT found.\n");
        exit(0);
    }
    else
    {
        char c;
        while ((c = getchar()) != EOF)
        {
            // scanf("%c", &c);
            fprintf(p, "%c", c);
            // fputc(c,p);
        }
        while ((c=fgetc(p)) != EOF)
        {
            printf("%c", c);


            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                fprintf(v, "%c\n", c);
            // fputc(c,v);
            else
                fprintf(con, "%c\n", c);
            // fputc(c,con);
        }
        // while ((c = fgetc(v)) != EOF)
        // {
        //     printf("%c", c);
        // }
        // fcloseall();
        fclose(p);
        fclose(con);
        fclose(v);
    }
    // printf();
    return 0;
}
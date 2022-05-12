#include <stdio.h>

int main()
{
    char c[100];
    int i = 0, vow = 0, con = 0;
    fgets(c, 100, stdin);
    printf("You have Entered : %s", c);
    for (; c[i] != '\0'; i++)
    {
        if ((c[i] >= 65 && c[i] <= 90) || (c[i] >= 97 && c[i] <= 122))
        {
            if ((c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u') || (c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U'))
                vow++;
            else
                con++;
        }
    }
    printf("Num of Vow == %d Num of Con == %d",vow,con);

    return 0;
}
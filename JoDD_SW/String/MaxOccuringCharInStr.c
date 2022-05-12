#include <stdio.h>

int main()
{
    char c[100], maxch;
    int i, j, max=0, count;
    printf("Enter string: \n");
    fgets(c, 100, stdin);
    for (i = 0; c[i] != '\0'; i++)
    {
        count = 0;
        if (c[i] == ' ')
            continue;
        else
        {
            for (j = i; c[j] != '\0'; j++)
                if (c[j] == c[i])
                    count++;
            if (count > max)
            {
                max = count;
                maxch = c[i];
            }
        }
    }
    printf("Maximum occuring character is : %c \nand has occured %d times.\n", maxch, max);
    return 0;
}
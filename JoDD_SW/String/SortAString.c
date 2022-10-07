#include <stdio.h>
#include <string.h>

void swap(char *p, char *q)
{
    char temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    int i, j;
    char c[100];
    printf("Enter String : ");
    scanf("%[^\n]s", c);
    printf("You just Entered : %s \n", c);
    for (i = 0; i < strlen(c) - 1; i++)
        for (j = 0; j < strlen(c) - i - 1; j++)
            if (c[j] > c[j + 1])
                swap(&c[j], &c[j + 1]);
    printf("The string in sorteed order is : \n %s", c);
    return 0;
}
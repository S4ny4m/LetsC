#include <stdio.h>
// program to check weather a number is being repeated in a number or not
void check(int n)
{
    int seen[10] = {0}, i /*declaring each elemant of th e array 0*/;
    while (n > 0)
    {
        i = n % 10;
        if (seen[i] == 1)
            break;
        seen[i] = 1;
        n /= 10;
    }
    if (n > 0)
        printf("YES the numbers are being repeated.\n");
    else
        printf("No repetition \n");
}
int main()
{
    int n;
    printf("Enter number: \n");
    scanf("%d", &n);
    check(n);
    return 0;
}
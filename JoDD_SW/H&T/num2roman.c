#include <stdio.h>
#include <math.h>

int choice()
{
    int n;
    printf("\nEnter number:\n");
    scanf("%d", &n);
    return n;
}

int onenine(int d)
{
    switch (d)
    {
    case 1:
        printf("I");
        break;
    case 2:
        printf("II");
        break;
    case 3:
        printf("III");
        break;
    case 4:
        printf("IV");
        break;
    case 5:
        printf("V");
        break;
    case 6:
        printf("VI");
        break;
    case 7:
        printf("VII");
        break;
    case 8:
        printf("VIII");
        break;
    case 9:
        printf("IX");
        break;
    }
}
int tens(int d)
{
    switch (d)
    {
    case 1:
        printf("X");
        break;
    case 2:
        printf("XX");
        break;
    case 3:
        printf("XXX");
        break;
    case 4:
        printf("Xl");
        break;
    case 5:
        printf("L");
        break;
    case 6:
        printf("LX");
        break;
    case 7:
        printf("LXX");
        break;
    case 8:
        printf("LXXX");
        break;
    case 9:
        printf("IC");
        break;
    }
}
int hund(int d)
{
    switch (d)
    {
    case 1:
        printf("C");
        break;
    case 2:
        printf("CC");
        break;
    case 3:
        printf("CCC");
        break;
    case 4:
        printf("CD");
        break;
    case 5:
        printf("D");
        break;
    case 6:
        printf("DC");
        break;
    case 7:
        printf("DCC");
        break;
    case 8:
        printf("DCCC");
        break;
    case 9:
        printf("CM");
        break;
    }
}

int main()
{
    int d, n, num, dig;
    printf("Program to convert number from numeric to roman\n");
    do
    {
        n = choice();
        num = n;
        for (; n > 0; d++, n /= 10)
        {
        }
        n = num;
        num = 0;

        for (d; d >= 1; d--)
        {
            dig = n / (int)pow(10, (d - 1));
            n = n % (int)pow(10, (d - 1));
            // printf("%d\n",dig);
            switch (d)
            {
            case 1:
                onenine(dig);
                break;
            case 2:
                tens(dig);
                break;
            case 3:
                hund(dig);
                break;
            default:
                break;
            }
        }
        // printf("g");
    } while (n != -1);

    return 0;
}
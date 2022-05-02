#include <stdio.h>
#include <math.h>
int choice();
void onenine(int i);
void eleven(int i);
void ten(int i);
int choice()
{
    int a;
    printf("Enter number:\n");
    scanf("%d", &a);
    return a;
}
void onenine(int i)
{
    switch (i)
    {
    case 1:
        printf("One ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("Three ");
        break;
    case 4:
        printf("Four ");
        break;
    case 5:
        printf("Five ");
        break;
    case 6:
        printf("Six ");
        break;
    case 7:
        printf("Seven ");
        break;
    case 8:
        printf("Eight ");
        break;
    case 9:
        printf("Nine ");
        break;
    }
}
void eleven(int i)
{
    switch (i)
    {
    case 1:
        printf("Eleven ");
        break;
    case 2:
        printf("Twelve ");
        break;
    case 3:
        printf("Thirteen ");
        break;
    case 4:
        printf("Fourteen ");
        break;
    case 5:
        printf("Fifteen ");
        break;
    case 6:
        printf("Sixteen ");
        break;
    case 7:
        printf("Seventeen ");
        break;
    case 8:
        printf("Eighteen ");
        break;
    case 9:
        printf("Nineteen ");
        break;
    }
}
void ten(int i)
{
    switch (i)
    {
    case 1:
        printf("Ten ");
        break;
    case 2:
        printf("Twenty ");
        break;
    case 3:
        printf("Thirty ");
        break;
    case 4:
        printf("Fourty ");
        break;
    case 5:
        printf("Fifty ");
        break;
    case 6:
        printf("Sixty ");
        break;
    case 7:
        printf("Seventy ");
        break;
    case 8:
        printf("Eighty ");
        break;
    case 9:
        printf("Ninty ");
        break;
    }
}
int main()
{
    int n, d, num, i, dig, div;
    n = choice();
    num = n;
    for (d = 0; n > 0; n /= 10, d++)
    {
    }
    n = num;
    // printf("%d",d);
    for (d; d >= 1; d--)
    {
        div = pow(10, (d - 1));
        dig = n / div;
        n = n % div;
        // printf("%d\n",dig);
        switch (d)
        {
        case 1:
            onenine(dig);
            break;
        case 2:
            if (dig == 1)
            {
                eleven(n);
                d--;
            }
            else
            {
                ten(dig);
            }
            break;
        case 3:
            onenine(dig);
            printf("Hundred ");
            break;
        case 4:
            if (i == 1)
            {
                eleven(dig);
            }
            else
            {
            onenine(dig);
            }
            printf("Thousand ");
            break;
        case 5:
            if (dig == 1)
            {   
                i++;
                // break;
            }  
            else
            {
                ten(dig);
            }
        default:
            break;
        }
        // d--;
    }
    return 0;
}
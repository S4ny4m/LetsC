#include <stdio.h> 

int main()
{
    int len, b, area;
    printf("Enter the length of rect \n");
    scanf("%d", &len);
    printf("Enter the breadth of rect \n");
    scanf("%d", &b);
    area = len*b;
    printf("area of rectangle is %d",area);
    return 0;
}
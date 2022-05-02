#include <stdio.h> 

int main(){
    int r;
    float pi=2.14;
    printf("Enter the value of radius; \n");
    scanf("%d", &r);
    float ar = pi*r*r ;
    printf("area of circle is : %f",ar);
    return 0;
}
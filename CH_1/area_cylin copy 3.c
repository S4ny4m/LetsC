#include <stdio.h> 

int main(){
    float r,h;
    float pi=2.14;
    printf("Program to find the volume of a cylinder\n");
    printf("Enter the value of radius; \n");
    scanf("%f", &r);

    printf("Enter the value of height; \n");
    scanf("%f", &h);
    float ar = pi*r*r*h ;
    printf("area of cylinder is : %f",ar);
    return 0;
    
}
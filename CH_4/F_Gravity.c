#include <stdio.h> 
float mg (float a);
int main(){
    printf("Program to find force of attraction on a body of mass m exerted by earth\n");
    float m;
    printf("Enter mass of the body:");
    scanf("%f", &m);
    printf("force of attraction on a body of mass %f exerted by earth is %f",m,mg(m));
    return 0;
}
float mg (float a)
{
    float ag,g=9.8;
    ag=a*g;
    return ag;
}
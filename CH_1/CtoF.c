#include <stdio.h> 

int main(){
    float f, c;
    printf(   "Enter the value of C: \n");
    scanf("%f", &c);
    f=c*9/5+32;
    printf("%f Degree C in F is %f",c,f);
    return 0;
}
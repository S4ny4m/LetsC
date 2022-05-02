#include <stdio.h> 
#include <math.h> 

int main(){
    int s;
    printf("program to print area of squareusing pre defined functions.\n");
    printf("Enter side of square:");
    scanf("%d", &s);
    printf("Area of square is %f\n",pow(s,2));//pow function returns double data type so we use %f. 
    return 0;
}
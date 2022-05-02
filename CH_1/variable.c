#include <stdio.h>
/*nhi ho rha kyaa
*/
int main ()
{
    int a = 10;
    float b = 11.7; 
    char c = 'J';
    int d = 14;
    int e = 11+11;
    printf("the value of a is  %d \n", a);//%d is used to represent real values
    printf("the value of b is  %f \n", b);// %f is used to represent integer values
    printf("the value of c is  %c \n", c);// %c is used to represent character values
    printf("the value of plus is  %d \n", a+e);// cant add an int type and float type gives wrong output
    printf("the value of minus is  %d \n", a-d);
    return 0;
}
#include <stdio.h>
struct 
{
    int capacity;
    char *engine;
}car1,car2;

int main()
{ 
    car1.capacity=5;
    car1.engine="v8 twin turbo";
    car2.capacity=10;
    printf("%d \n",car1.capacity);
    printf("%d \n",car2.capacity);
    printf("%s \n", car1.engine);
return 0;
}
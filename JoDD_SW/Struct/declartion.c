#include <stdio.h>
struct
{
    int capacity;
    char *engine;
} car1, car2, *p1, *p2; // Declaring Global structures and  global pointers

int main()
{
    car1.capacity = 5;
    car1.engine = "v8 twin turbo";
    car2.engine = "500 hp v7 overclocked";
    car2.capacity = 10;
    p1 = &car1;
    p2 = &car2;
    // printing the values of the capacity using the structire name and the values of the engine using the pointer name.
    printf("%d \n", car1.capacity);
    printf("%d \n", car2.capacity);
    printf("%s \n", p1->engine);
    printf("%s \n", p2->engine);
    return 0;
}
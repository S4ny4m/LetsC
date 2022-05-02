#include <stdio.h> 

int main(){
    int i=1;
    printf("program to show usse of do while loop");
    do
    {
        printf("The value of i is %d\n",i)
        i++;   
    } while (i<10);
// Do-while loop works very similar to while loop
// While -> checks the condition & then executes the code
// Do-while -> executes the code & then checks the condition
// **do-while loop = while loop which executes at least once
    return 0;
}
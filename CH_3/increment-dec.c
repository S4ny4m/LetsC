#include <stdio.h> 

int main(){
    printf("Program to show use of a++/++a and a--/--a\n");
    int a=1,b=a;
    
    printf("VALUE OF A IS %d\n",a++); //pehele print krega phir increment krega
    printf("VALUE OF A IS %d\n",a); //pehele print krega phir increment krega
    
        
    printf("VALUE OF B IS %d\n",++b); //pehele increment krega phir print krega
    printf("VALUE OF B IS %d\n",b); //pehele increment krega phir print krega
    
    //similary it goes for A--/--A

    return 0;
}
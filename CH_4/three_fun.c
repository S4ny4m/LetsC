#include <stdio.h> 
void gm();
void gf();
void gn();

int main(){
    printf("Now we are goinf to print gm,gf,gn using functions\n");
    gm();
    // gf();
    // gn();
    return 0;

}
void gm(){
    printf("Good Morning Guyss.\n");
    gf();//
}
void gf(){
    printf("Good Afternoon Guyss.\n");
    gn();
}
void gn(){
    printf("Good Night Guyss.\n");
}
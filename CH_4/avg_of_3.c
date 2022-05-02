    #include <stdio.h> 
int sum();

int main(){
    printf("Program to find the avg of 3 numbers using functions.\n");
    int x,y,z;
    printf("Enter num:\n");
    scanf("%d",&x);
    printf("Enter num:\n");
    scanf("%d",&y);
    printf("Enter num:\n");
    scanf("%d",&z);
    printf("The average of %d, %d and %d is %d",x,y,z,(sum(x,y,z))/3);
    return 0;
}
int sum(int a,int b,int c)
{
    int s= a+b+c;
    return s;
}
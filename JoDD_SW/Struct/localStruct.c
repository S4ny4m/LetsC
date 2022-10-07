#include <stdio.h>
struct 
{
    char *name;
    int age;
    int salary;
}e1,e2;
int manager()
{
    struct 
    {
        char *name;
        int age ;
        int salary;
    }manager;
    printf("Enter the age of manager :\n");
    scanf("%d",&manager.age);
    if (manager.age>30)
        manager.salary=1000;
    else 
        manager.salary=500;
    
    // printf();
return manager.salary;
}
int main()
{
    printf("Enter the salary of employee E1: \n");
    scanf("%d",&e1.salary);
    printf("Enter the salary of employee E2: \n");
    scanf("%d",&e2.salary);
    printf("manager salary =%d \n",manager());
    printf("E1 salary = %d \n",e1.salary);
    printf("E2 salary = %d \n",e2.salary);
}
    
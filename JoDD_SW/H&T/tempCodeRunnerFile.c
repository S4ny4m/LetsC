#include <stdio.h>
void highestmarks();

int main()
{
    int arr[5][10] = {0}, i, j;
    printf("Program to store marks ok 10 students in 5 subjects.\n");
    for (i = 0; i < 10; i++)
    {
        printf("Marks of student %d :\n", i + 1);
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        // printf("%d \n",i);
    }
    

    highestmarks(arr);
    return 0;
}
void highestmarks(int arr[5][10])
{
    // fun to print highest marks in each subject.
    int i, j, max[5] = {0};
    printf("Entered marks are : \n");
    for (i = 0; i < 10; i++)
    {
        printf("student %d   ==>",i+1);
        for (j = 0; j < 5; j++)
        {   

            printf("%d ",arr[i][j]);
            if (arr[i][j] > max[j])
             max[j] = arr[i][j];
            

        }
        printf("\n");
    }
    printf("Highest marks are as follows  : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", max[i]);
    }
}
#include <stdio.h>
//we need to flush the stream before taking another set of input.

int main()
{
    char ch[]="We can write the string here.";
    char ch1[]={'a','b','c','d','\0'};
    char input[10],input2[100],input3[100],input4[100],input5[100];
    scanf("%s",input);//will stop scanning after the first space
    // printf("\nOnly 5 char ;\n");
    scanf("%5s",input2);//will take input only of first "%ns" 'n' words;
    scanf("%[^\n]s",input3);//will stop scanning after pressing newline i.e enter
    gets(input4);//not  recemended to use this function

    fgets(input5,100,stdin);//strname,maxlength,source of input;
    printf("\n\n\n");
    printf("ch= %s\n ch2= %s\n input1= %s\n input2=%s\n input3=%s\n",ch,ch1,input,input2,input3);
    printf("input4="); puts(input4);
    printf("input5=");puts(input5);

return 0;
}
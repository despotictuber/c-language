#include<stdio.h>
void main()
{

int math, science, hindi, english,sst,totalMarks,percentage;


printf("enter the marks of math :- ");
scanf("%d",&math);
printf("enter the marks of SCIENCE :- ");
scanf("%d",&science);
printf("enter the marks of HINDI :- ");
scanf("%d",&hindi);
printf("enter the marks of ENGLISH :- ");
scanf("%d",&english);
printf("enter the marks of SST :- ");
scanf("%d",&sst);

totalMarks= math +science+ hindi+ english+ sst;
printf("your total marks is = %d \n",totalMarks);

percentage= totalMarks*100/500;
printf("your percentage is = %d \n",percentage);

if(percentage<=33)
{
    printf("you are fail \n");
}
else if(percentage>>33&&percentage<=50)
{
    printf("you are pass \n");
    printf("your grade is c");
}
else if(percentage>>50&&percentage<=80)
{
    printf("your grade is B \n");
    printf("you are pass");
}
else if(percentage>>80&&percentage<=100)
{
   printf("your grade is A \n");
    printf("you are pass");
}
}

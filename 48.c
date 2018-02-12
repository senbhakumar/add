#include<stdio.h>
void main()
{
int i,num,avg;
clrscr();
printf("enter the num");
scanf("%d",&num);
for(i=0;i<=num;i++)
{
avg=num/5;
printf("the avg num is %d",avg);
}
getch();
}

#include<stdio.h>
void main()
{
int num,a,i;
clrscr();
printf("enter the num");
scanf("%d",&num);
for(i=0;i<num+1;i++)
{
a=num+1;
printf("nxt num = %d",a);
}
getch();
}

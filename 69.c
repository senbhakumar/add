#include <stdio.h>
void main()
{
int m1,m2,m3;
clrscr();
printf("enter the 2values");
scanf("%d %d",&m1,&m2);
m3=m1*m2;
if(m3%2==0)
{
printf("even");
}
else
printf("odd");
getch();
}

#include <stdio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the 2values");
scanf("%d %d",&a,&b);
c=a*b;
if(c%2==0)
{
printf("even");
}
else
printf("odd");
getch();
}

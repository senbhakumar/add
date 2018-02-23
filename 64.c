#include <stdio.h>
void main()
{
int n1,n2,n3;
clrscr();
printf("enter the 2values");
scanf("%d %d",&n1,&n2);
n3=n1*n2;
if(n3%2==0)
{
printf("even");
}
else
printf("odd");
getch();
}

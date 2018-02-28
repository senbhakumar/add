#include<stdio.h>
void main()
{
int n,r,l;
clrscr();
printf("enter the n value");
scanf("%d",&n);
printf("enter the l,r value");
scanf("%d%d",&l,&r);
if(n>=0&&n<=r)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}

#include<stdio.h>
void main()
{
int a[1],n,i,max;
clrscr();
printf("enter the array");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
if(a[i]>=max)
printf("the value is max %d{",a[i]);
else if(a[i]<=max)
printf("the value is min %d",a[i]);
getch();
}

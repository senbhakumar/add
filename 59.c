
#include <stdio.h>
void main()
 {
int a[10];
int i,t;
printf("enter the value");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
if(a[i]>a[i+1])
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
}
printf("the maximum number %d",a[i]);
getch();
}

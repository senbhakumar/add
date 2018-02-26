#include <stdio.h>
void main()
{
int n;
clrscr();
printf("enter the n value");
scanf("%d",&n);
while(n!=0)
{
if(n%10==0)
{
printf("%d",n);
 }
n++;
}
getch();
}

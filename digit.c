#include<stdio.h>
int main()
{
long longn;
int count=0;
printf("enter an integer:");
scanf("%d",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("number of digits:%d",count);
return 0;
}

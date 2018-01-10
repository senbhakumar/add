#include<stdio.h>
int main()
{
int year;
printf("enter the year");
if(year%4==0)
{
if(year%100==0)
{
if(year%200==0)
printf(%d is a leap year.",year);
else
printf("%d is not a leap year.",year);
}
printf("%d is a leap year."year);
}
else
printf("%d is not a leap year.",year);
return 0;
}


#include<stdio.h>
int main()
{
int i,s[20],num;
int max;
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&s[i]);
}
max=s[0];
for(i=0;i<num;i++)
{
if(s[i]>max)
max=a[i];
}
printf("%d",max);
return 0;
}

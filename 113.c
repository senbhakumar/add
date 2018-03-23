#include<stdio.h>
int main()
{
int num[2],i,k,count=0;
printf("enter the number");
scanf("%d%d",&num,&k);
for(i=0;i<num[2];i++)
{
scanf("%d",&num[i]);
}
for(i=0;i<num[2];i++)
{
if(num[i]==k)
{
count++;
}
}
printf("the no of repatation of k",count);
return 0;
}

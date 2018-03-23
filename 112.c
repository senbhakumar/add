
#include<stdio.h>
int main()
{
int n,i,k,s[50],f=0;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&s[i]);
}
for(i=0;i<n;i++)
{
if(s[i]==k)
{
f=i;
break;
}
if(f==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}}

#include<stdio.h>
int main()
{
int i,count=0;
char str[20];
printf("give the str value");
scanf("%s",&sr);
for(i=0;str[i]!=0;i++)
{
if(str[i]==' ')
{
count++;
}
printf("%d",count+1);
return 0;
}

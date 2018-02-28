#include<stdio.h>
void main()
{
int i,count=0;
char str[20];
printf("give the str value");
scanf("%s",&str);
for(i=0;str[i]!=0;i++)
{
if(str[i]==' ')
{
count++;
}
printf("%d",count+1);
getch();
}}

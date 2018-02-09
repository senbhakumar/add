#include<stdio.h>
int main()
{
char s1[100],s2[100];
int i,j;
printf("enter the value of s1,s2");
scanf("%s %s",&s1,&s2);
i=strlen(s1);
j=strlen(s2);
if(i>j)
{
printf("%s is greater",s1);
}
else
{
 printf("%s is lesser string",s2);
 }
return 0;
}

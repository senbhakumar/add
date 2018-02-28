#include<stdio.h>
void main()
{
char a[100];
int b,i,count=0;
printf("enter the b value");
scanf("%s",b);
b=strlen(a);
for(i=0;i<=b;i++)
{
if(a[i]==a[b-i-b])
{
count++;
}
}
if(b==count)
{
printf("palindrome %d",i);
}
else
{
printf("not palindrome");
}
getch();
}

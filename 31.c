#include<stdio.h>
int main()
{
int length=0,i;
char s[20];
clrscr();
printf(" give the character:");
scanf("%s",s);
strlen(s);
for(i=0;i<strlen(s);i++)
{
length++;
}

printf("%d",length);
return 0;
}

#include <stdio.h>
void main()
{
char a,b[30],c[30];
int o,no,n,s,t,x;
printf("Enter some text\n");
scanf("%s", b);
n=strlen(b);
for(s=0;s<n;s++)
{
s=b[s]- 'a';
no[c]++;
}
t=0;
for(s= 'a';s<= 'z';s++)
{
x=s- 'a';
for(b=0;b<=no;b++)
{
c[t]=s;
t++;
}
}
o[t] = '\0';
printf("%s\n",x);
getch();
}

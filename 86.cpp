#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()
{
int i,a,flag=0;
char s[20];
cout<<"enter the string";
cin>>s;
a=strlen(s);
for(i=0;i<=a;i++)
{
if(s[i]==s[i+1])
{
flag=1;
}
break;
}
if(flag==1)
{
cout<<"no";
}
else
{
cout<<"yes";
}
getch();
}

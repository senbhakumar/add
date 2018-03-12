#include<iostream.h>
#include<conio.h>
int main()
{
int a,b,i;
char sym;
cout<<"enter the numbers";
for(i=0;i<=4;i++)
{
cin>>a>>b;
if(sym=='/')
{
cout<<"display"<<a/b;
}
else
{
cout<<"display"<<a%b;
}
return 0;
}}

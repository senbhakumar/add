
#include<iostream.h>
#include<conio.h>
void main()
{
int n,a,i;
cout<<"enter the number";
cin>>n;
for(i=0;i<=n;i++)
{
if(n%i==0)
{
a=i;
}
}
if(a==0)
{
cout<<"prime n9o";
}
else
{
cout<<"composite";
}
getch();
}

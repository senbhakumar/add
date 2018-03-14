#include<iostream.h>
int main()
{
int n,a[20],i;
cout<<"enter the values";
cin>>n;
for(i=0;i<=n;i++)
{
cin>>a[i];
}
for(i=0;i<=n;i++)
{
if(i!=a[i])
{
cout<<"display"<<a[i];
}
}
return 0;
}

#include<iostream.h>
#include<conio.h>
int main()
{
int a[10],n,i,sum=0;
cout<<"enter the value";
cin>>n;
cout<<"enter the element";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
cout<<"sum of num is"<<sum;
return 0;
}

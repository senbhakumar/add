#include<iostream.h>
#include<conio.h>
int main()
{
int n,a,d,i,s=0;
cout<<"enter the terms";
cin>>a;
cout<<"enter the difference";
cin>>d;
cout<<"enter the no of terms";
cin>>n;
for(i=0;i<n;i++)
{
s=s+(a+i*d);
}
cout<<"display  "<<s;
return 0;
}

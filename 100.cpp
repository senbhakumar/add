#include<iostream.h>
int main()
{
int n,pro=1,r;
cout<<"enter the number";
cin>>n;
while(n!=0)
{
r=n%10;
pro=pro*r;
n=n/10;
}
cout<<"print the product"<<pro;

return 0;
}

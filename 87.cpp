#include<iostream.h>
int main()
{
int n1,n2,i,gcd;
cout<<"enter the numbers";
cin>>n1>>n2;
for(i=0;i<=n1 &&i<=n2;i++)
{
if(n1%1==0 && n2%1==0)
gcd=i;
}
cout<<"display"<<n1<<n2<<gcd;

return 0;
}

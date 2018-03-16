#include<iostream.h>
int main()
{
int n1,n2,i,rem;
cout<<"enter the number";
cin>>n1;
while(n1!=1)
{
rem=n1%2;
n2=n1/2;
cout<<"print"<<n2;
n1=rem;
break;
}
return 0;
}

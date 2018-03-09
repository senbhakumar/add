#include<iostream.h>
int main()
{
int n1,n2,min;
cout<<"enter the numbers";
cin>>n1>>n2;
min=(n1>n2)? n1:n2;
while(1)
{
if(min%n1==0 && min%n2==0)
{
cout<<"print the lcm"<<n1<<n2<<min;
break;
}
++min;
}
return 0;
}

#include<iostream.h>
int main()
{
int num,rem,rev=0,n;
cout<<"enter the numbers";
cin>>n;
n=num;
while(num!=0)
{
rem=num%10;
rev=(rev*10)+rem;
num=num/10;
}
cout<<"reverse numbers is"<<n<<rev;
return 0;
}

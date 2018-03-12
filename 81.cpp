#include<iostream.h>
int main()
{
int a,b,i;
cout<<"enter the vallues";
for(i=0;i<3;i++)
{
cin>>a>>b;
if(a>b)
{
cout<<"display"<<a-b;
}
else
{
cout<<"display"<<b-a;
}
}
return 0;
}

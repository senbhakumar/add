#include<iostream.h>
int main()
{
int n,k,i,arr[10],f=0;
cout<<"enter the numbers";
cin>>n>>k;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
for(i=0;i<n;i++)
{
if(arr[i]%2==1)
  {
f++;
 }
if(f==k)
{
cout<<" the %dth odd number"<<arr[i],k;
break;
}
}
return 0;
}

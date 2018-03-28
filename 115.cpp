#include<iostream.h>
int main()
{
int n,k,j,i,arr[10],t;
cout<<"enter the numbers";
cin>>n>>k;
for(i=0;i<n;i++)
{
cin>>arr[i];
{
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
  {
t=arr[i];
arr[i]=arr[j];
arr[j]=t;
}
}
}
cout<<" tthe smallest no is"<<arr[k-1],k;
}
return 0;
}

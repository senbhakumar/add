#include<iostream.h>
int main()
{
char t[50],s[50];
int a,j,i;
cout<<"enter the string";
cin>>s;
for(i=0;s[i]!=0;i++)
{
for(j=i+1;s[j]!=0;j++)
{
if(s[i]>s[j])
{
t[a]=s[i];
s[i]=s[j];
s[j]=s[a];
}
}
cout<<"display"<<s;
return 0;
}}

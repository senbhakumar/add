#include<iostream.h>
#include<string.h>
int main()
{
int n,i;
char s[100];
cout<<"enter the string";
cin>>s;
n=strlen(s);
for(i=0;i<=n;i++)
{
if(s[i]>='0' && s[i]<='9')
{
cout<<"display"<<s[i];
}
}
return 0;
}



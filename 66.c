#include <stdio.h>
void main()
{
int n,i,a=0;
printf("Enter a n value ");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
 {
 if(n%i==0)
{
a=1;
break;
}
}
if(a==0)
{
printf("%d  itis a prime number.",n);
}
else
{
printf("%d it is not a prime number.",n);
}
getch();
}

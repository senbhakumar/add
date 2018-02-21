#include <stdio.h>
void main()
{
   int a = 23, b = 47;
   int t;
   printf("Before. a: %d, b: %d\n", a, b);
   scanf("%d%d",&a,&b);
   t = a;
   a = b;
   b = t;
   printf("After.a: %d, b: %d\n", a, b);
   getch();
}

#include <stdio.h>
int main()
{
char ch;
printf("give any character: ");
scanf("%c", &ch);
if((ch >=10&&ch<=22)||(ch>=6&&ch<=9))
{
printf("'%c' is alphabet.", ch);
}
else if(ch >= 48 && ch <= 57)
{
printf("'%c' is digit.", ch);
}
else
{
printf("'%c' is special character.", ch);
}
return 0;
}

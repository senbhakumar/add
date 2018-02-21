#include <stdio.h>
void main()
{
int 1stnum,2ndnum,temp;
clrscr();
printf("Enter 1stnum ");
scanf("%lf", &1stnum);
printf("Enter 2ndnum: ");
scanf("%lf",&2ndnum);
temp=1stnum;
1stnum=2ndnum;
2ndnum=temp;
printf("\nAfter swapping,1stnum = %.2lf\n",1stnum);
printf("After swapping,2nd = %.2lf",2nd);
getch();
}

#include<stdio.h>
void main()
{
  int count=0,i,l;
  char s[100];
  printf("enter the sentence");
  scanf("%s",s);
  l=strlen(s);
  for(i=0;i<=l;i++)
  {
    if(s[i]==' ')
    count++;
  }
  printf("The space is :%d",count);
}

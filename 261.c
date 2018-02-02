#include <stdio.h>
int main()
{
 int array[50],i,j,num,temp;
  printf("give the value of num \n");
 scanf("%d", &num);
 printf("give the elements one by one \n");
 for(i=0;i<num;i++)
 {
 scanf("%d", &array[i]);
 }
 printf("give array is \n");
  for(i=0;i<num;i++)
  {
 printf("%d\n",array[i]);
  }
  for(i=0;i<num;i++)
  {
  for(j=0;j<(num-i-1);j++)
 }
 if (array[j]>array[j+1])
 {
 temp=array[j];
 array[j]=array[j+1];
 array[j+1]=temp;
 }
 }
}
 printf("Sorted by array is...\n");
 {
 for (i=0;i<num;i++)
 {
 printf("%d\n", array[i]);
 }
}

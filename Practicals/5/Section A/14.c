#include <stdio.h>
int main()
{
 int i,ec=0,oc=0,num[10];
 for (i=0;i<10;i++)
 {
 printf("Enter a number : ");
 scanf("%d",&num[i]);
 if (num[i] % 2 == 0)
 ec++;
 else
 oc++;
 }
 printf("Even number count : %d",ec);
 printf("\nOdd number count : %d",oc);
}

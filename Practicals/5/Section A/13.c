#include <stdio.h>
int main()
{
 int i,num[10];
 for (i=0;i<10;i++)
 {
 printf("Enter a number : ");
 scanf("%d",&num[i]);
 }
 for (i=0;i<10;i++)
 {
 printf("%d, ",num[i]);
 }
}

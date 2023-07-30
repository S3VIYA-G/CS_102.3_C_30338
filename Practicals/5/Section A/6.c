#include <stdio.h>
int main()
{
 int base,ex,i=0,f=1;
 printf("Enter the base : ");
 scanf("%d",&base);
 printf("Enter the exponent : ");
 scanf("%d",&ex);
 if (ex<0)
 printf("Exponent can't be a negative number");
 else
 while (i < ex){
 f *= base;
 i++;
 }
 printf("%dth power of %d is : %d",ex,base,f);
 return 0;
}

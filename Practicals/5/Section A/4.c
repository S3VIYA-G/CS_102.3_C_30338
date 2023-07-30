#include <stdio.h>
int main()
{
 int sum=0,num,x,c=0;
 printf("Enter your number : ");
 scanf("%d",&num);
 do {
 x = num % 10;
 sum += x;
 num /= 10;
 c++;
 }
 while (num!=0);
 printf("Sum of the digits of the given number is %d\n",sum);
 return 0;
}

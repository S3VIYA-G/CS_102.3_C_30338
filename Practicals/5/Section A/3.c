#include <stdio.h>
int main()
{
 int num,count=1;
 long long f=1;
 printf("Enter your number : ");
 scanf("%d",&num);
 if (num<0){
 printf("Factorial is not defined for negative numbers.\n");
 return 0;
 }
 do{
 f*=count;
 count+=1;
 }
 while(count<=num);
 printf("Factorial of your number is : %lld",f);
 return 0;
}


#include <stdio.h>
int main()
{
 int num,c,d=0;
 printf("Enter a number : ");
 scanf("%d",&num);
 if (num==0 || num==1)
 d=1;
 for(c = 2;c <= num / 2;++c){
 if( num % c == 0){
 d=1;
 break;
 }
 }
 if (d==0)
 printf("%d is a prime number",num);
 else
 printf("%d is not a prime number",num);
}

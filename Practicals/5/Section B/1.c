#include <stdio.h>
int main()
{
 int num,c=0,p=0,n=0,z=0;
 do{
 printf("Enter a number : ");
 scanf("%d",&num);
 c++;
 if (num>0)
 p += 1;
 else if (num<0)
 n += 1;
 else
 z += 1;
 }
 while (c<10);
 printf("Positive numbers : %d\n",p);
 printf("Negative numbers : %d\n",n);
 printf("Zeros : %d\n",z);
}

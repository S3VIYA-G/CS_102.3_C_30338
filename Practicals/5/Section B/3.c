#include <stdio.h>
int main()
{
 int n=0,c=0,tot=0,x=0;
 while (c<10){
 printf("Enter a price : ");
 scanf("%d",&n);
 c++;
 tot += n;
 if(n>200)
 x++;
 }
 printf("Average price of an item is : %d\n",tot/2);
 printf("Number of items which the price is greater than 200 is :
 %d",x);
}

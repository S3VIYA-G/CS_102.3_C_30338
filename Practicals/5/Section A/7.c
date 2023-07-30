#include <stdio.h>
int main()
{
 int x=0,y=1,z,c=2;
 printf("%d\n",x);
 printf("%d\n",y);
 while(c<10){
 z=x+y;
 printf("%d\n",z);
 x=y;
 y=z;
 c++;
 }
}

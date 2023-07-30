#include <stdio.h>
int main()
{
 int tot,avg,count,mark;
 count=0;
 tot=0;
 while(count<10)
 {
 printf("Enter a mark : ");
 scanf("%d",&mark);
 count+=1;
 tot=tot+mark;
 }
 avg=tot/10;
 printf("Total is %d\n",tot);
 printf("Average is %d\n",avg);
 if(avg>50)
 printf("Pass");
 else
 printf("Fail");
}

#include <stdio.h>
void displaySD()
{
    int n1,n2,sum,dif;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    sum = n1 + n2;
    dif = n1 - n2;
    printf("The sum is %d\n",sum);
    printf("The difference is %d",dif);
}
int main()
{
    displaySD();
}

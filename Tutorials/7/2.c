#include <stdio.h>
void display(int a, int b)
{
    int sum,dif;
    sum = a + b;
    dif = a - b;
    printf("The sum is %d\n",sum);
    printf("The difference is %d",dif);
}
int main()
{
    int n1,n2;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    display(n1,n2);
}

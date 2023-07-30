#include <stdio.h>
void func(int a, int b)
{
    int sum,dif,pro;
    sum = a + b;
    dif = a - b;
    pro = a * b;
    printf("The sum is %d\nThe difference is %d\nThe Product is %d",sum,dif,pro);
}
int main()
{
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    func(num1,num2);
}

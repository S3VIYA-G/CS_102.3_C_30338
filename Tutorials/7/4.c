#include <stdio.h>
void findPro(int a,int b)
{
    int quo=0;
    quo = a / b;
    printf("%d",quo);
}
int main()
{
    int n1,n2;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    printf("The product is : ");
    findPro(n1,n2);
}

#include <stdio.h>
void findPro(int a,int b)
{
    int pro=0;
    pro = a * b;
    printf("%d",pro);
}
int main()
{
    int n1,n2;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    printf("The product is : ");
    findPro(n1,n2);
}

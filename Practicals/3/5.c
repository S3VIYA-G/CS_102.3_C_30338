#include <stdio.h>
int main()
{
    int n1,n2;

    printf("Enter First Number : ");
    scanf("%d",&n1);
    printf("Enter Second Number : ");
    scanf("%d",&n2);

    if (n2 != 0 && n1 % n2 == 0)
        printf("\n%d Is a Multipe of %d",n1,n2);
    else
        printf("\n%d Is not a Multipe of %d",n1,n2);
}

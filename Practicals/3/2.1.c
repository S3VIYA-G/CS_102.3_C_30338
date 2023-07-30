#include <stdio.h>
int main()
{
    int a,b,c;

    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Enter third number : ");
    scanf("%d",&c);
    printf("\n\n\n");

    if (a>b)
        if (a>c)
            printf("Largest number is %d\n",a);
        else
            printf("Largest number is %d\n",c);
    else
        if (b>c)
            printf("Largest number is %d\n",b);
        else
            printf("Largest number is %d\n",c);

    if (a>b)
        if (b>c)
            printf("Smallest number is %d",c);
        else
            printf("Smallest number is %d",b);
    else
        if (a>c)
            printf("Smallest number is %d",c);
        else
            printf("Smallest number is %d",a);

}

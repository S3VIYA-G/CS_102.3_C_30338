#include <stdio.h>
int main()
{
    int num;

    printf("Enter an integer : ");
    scanf("%d",&num);

    if (num%2==0)
        printf("Entered number is an Even");
    else
        printf("Entered number is an Odd");
}

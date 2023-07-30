#include <stdio.h>
int sum()
{
    int num1,num2,sum;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    sum = num1 + num2;
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);
    return sum;
}
int main()
{
    int i;
    for (i = 0; i < 4; i++) {
        sum();
        printf("\n");
    }
}

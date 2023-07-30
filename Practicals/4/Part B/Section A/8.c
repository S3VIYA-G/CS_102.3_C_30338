#include <stdio.h>
int main()
{
    int sum=0,num,x,y,c=0,z;

    printf("Enter your number : ");
    scanf("%d",&num);
    y=num;
    z=num;

    while (num!=0){
        num /= 10;
        c++;
    }

    do {
        x = y % 10;
        x = pow(x,c);
        sum += x;
        y /= 10;
    }
    while (y!=0);

    if (sum==z)
        printf("%d is an Armstrong Number\n",z);
    else
        printf("%d is not an Armstrong Number\n",z);

    printf("Sum of the digits of the given number is %d\n",sum);
    printf("Digits %d\n",c);
    return 0;
}

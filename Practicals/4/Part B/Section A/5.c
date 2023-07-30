#include <stdio.h>
int main()
{
    int num,x=0,y;
    printf("Enter your number : ");
    scanf("%d",&num);

    do{
        y = num % 10;
        x = x * 10 + y;
        num /= 10;
    }
    while (num!=0);
    printf("Reversed Number is : %d",x);

}

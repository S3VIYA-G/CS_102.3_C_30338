#include <stdio.h>
int main()
{
    int n1,n2,x;

    printf("Enter two numbers ");
    scanf("%d %d",&n1,&n2);

    printf("1. +\n2. -\n3. *\n4. /\nPlease enter your choice ");
    scanf("%d",&x);

    switch(x){
    case 1:
        printf("Addition is %d",n1+n2);
        break;
    case 2:
        printf("Substaction is %d",n1-n2);
        break;
    case 3:
        printf("Multiplication is %d",n1*n2);
        break;
    case 4:
        printf("Devition is %d",n1/n2);
        break;

    }
}

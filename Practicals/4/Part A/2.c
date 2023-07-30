#include <stdio.h>
int main()
{
    float n1,n2,cal;
    char op;

    printf("Enter first number : ");
    scanf("%f",&n1);
    printf("Enter second number : ");
    scanf("%f",&n2);

    printf("Enter the operator : ");
    scanf("%s",&op);

    switch (op){
        case '+' :
            cal=n1+n2;
            printf("Addition = %.2f",cal);
            break;
        case '-' :
            cal=n1-n2;
            printf("Substraction = %.2f",cal);
            break;
        case '/' :
            if(n2!=0){
                cal=n1/n2;
                printf("Divition = %.2f",cal);
                break;}
            else
                printf("Error");
        case '*' :
            cal=n1*n2;
            printf("Multiplication = %.2f",cal);
            break;
    }
}

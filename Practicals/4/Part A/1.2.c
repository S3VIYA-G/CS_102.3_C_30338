#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d",&num);

    switch (num%2){
        case 0:
            printf("Entered number is an Even");
            break;

        case 1:
            printf("Entered number is an Odd");
            break;
}
}


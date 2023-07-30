#include <stdio.h>
int main()
{
    int x,tot=1;

    do {
        printf("Enter a number : ");
        scanf("%d",&x);
        tot = tot + x;
    }
    while(x != -1);

    printf("Total is : %d",tot);
}

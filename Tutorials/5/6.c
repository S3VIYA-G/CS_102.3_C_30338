#include <stdio.h>
int main()
{
    int x,num;
    float tot=0;
    for(x=0;x<10;x++){
        printf("Enter number %d : ",x+1);
        scanf("%d",&num);
        tot += num;
    }
    printf("Average of the above numbers is %.2f",tot/10);
}

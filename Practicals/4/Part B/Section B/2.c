#include <stdio.h>
int main()
{
    int m,c=1,max=0,min=0,tot=0,avg=0;

    do {
        printf("Enter a mark : ");
        scanf("%d",&m);
        tot += m;
        c += 1;
        min=m;

        if(m>max)
            max=m;

        if(m<min);
            min=m;
    }
    while (c<=10);

    avg += tot/10;

    printf("Maximum number is : %d\n",max);
    printf("Minimum number is : %d\n",min);
    printf("Average is : %d",avg);
}

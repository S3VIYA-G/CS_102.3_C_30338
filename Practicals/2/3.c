#include <stdio.h>
int main()
{
    int dis,time;

    printf("Distance travelled (m) : ");
    scanf("%d",&dis);
    printf("Time taken (s) : ");
    scanf("%d",&time);

    printf("Average speed : %d ms-1",dis/time);
}

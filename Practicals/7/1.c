#include <stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9},b[3][3]={9,8,7,6,5,4,3,2,1},i,j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            a[i][j] = a[i][j] + b[i][j];
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

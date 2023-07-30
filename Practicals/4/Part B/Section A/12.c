#include <stdio.h>
int main()
{
    int num,c,d=0;
    printf("Enter a number : ");
    scanf("%d",&num);

    printf("1, ");
    for(c = 2;c <= num / 2;++c){
        if( num % c == 0){
            printf("%d, ",c);
        }

    }
}


#include <stdio.h>
int main()
{
    char name[20];
    int b_year,age;

    printf("Input Your Name ");
    scanf("%s",&name);
    printf("Input Your Birth Year ");
    scanf("%d",&b_year);

    age=2023-b_year;

    printf("Name : %s\n",name);
    printf("Age : %d",age);
}

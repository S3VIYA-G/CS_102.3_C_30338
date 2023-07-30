#include <stdio.h>
int main()
{
    char name[20];
    int age;
    double height;
    float weight;

    printf("Enter your name ");
    scanf("%s",&name);
    printf("\nEnter your age ");
    scanf("%d",&age);
    printf("\nEnter your height (in m) ");
    scanf("%lf",&height);
    printf("\nEnter your weight (in kg) ");
    scanf("%f",&weight);

    printf("Name : %s\n",name);
    printf("Age : %d\n",age);
    printf("Height : %.2lf\n",height);
    printf("Weight : %.2f\n",weight);
}

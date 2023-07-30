#include <stdio.h>
int main()
{
    float r,x,pi;
    int cal;

    printf("Circumference of a circle : 1\nArea of a circle : 2\nVolume of a sphere : 3\nEnter the number of the calculation you want to make : ");
    scanf("%d",&cal);
    printf("Enter the Radius : ",&r);
    scanf("%f",&r);

    pi=3.141592653589793238;
    switch (cal){
        case 1:
            x=2*pi*r;
            printf("Circumference is : %.2f",x);
            break;
        case 2:
            x=pi*r*r;
            printf("Area is : %.2f",x);
            break;
        case 3:
            x=4/3*pi*r*r*r;
            printf("Volume is : %.2f",x);
            break;
}
}

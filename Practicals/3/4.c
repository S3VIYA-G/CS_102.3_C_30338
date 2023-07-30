#include <stdio.h>
#define pi 3.14159
int main()
{
    double r, diameter, circumference, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);

    printf("Diameter: %.2f\n",diameter = 2 * r);
    printf("Circumference: %.2f\n", circumference = 2 * pi * r);
    printf("Area: %.2f\n", area = pi * r * r);

}


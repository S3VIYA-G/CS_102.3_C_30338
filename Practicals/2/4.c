#include <stdio.h>
int main()
{
    float c,f;

    printf("Enter temperature reading in degrees Fahrenheit : ");
    scanf("%f",&f);

    c = (f-32)*5/9;

    printf("Temperature reading in degrees Celsius : %f",c);
}


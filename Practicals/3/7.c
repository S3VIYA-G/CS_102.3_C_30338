#include <stdio.h>
int main()
{
    float sal,ms,mr; //Basic Salary,Monthly Sales,Monthly Remuneration,Service Time
    int st;
    char city,C;

    printf("Enter Your Basic Salary : ");
    scanf("%f",&sal);
    printf("Are You Working in Colombo?\nIf yes enter C or else enter N : ");
    scanf("%S",&city);
    printf("Your Monthly Sales? ");
    scanf("%f",&ms);
    printf("How long have you been working with us? (Years) ");
    scanf("%f",&st);

    mr=sal;
    if (st>5)
        mr=mr+(sal*10/100);
    if (city=='C')
        mr=mr+2500;
    if (ms<25000)
        mr=mr+(ms*10/100);
    else if (25000<= ms <=50000)
        mr=mr+(ms*12/100);
    else
        mr=mr+(ms*15/100);

    printf("Your Monthly Remuneration is : %.2f",mr);
}

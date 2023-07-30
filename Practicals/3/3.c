#include <stdio.h>
int main()
{
    float n_sal,b_sal,inc;
    char name[20];

    printf("Enter Your Name : ");
    scanf("%s",&name);
    printf("Enter Basic Salary : ");
    scanf("%f",&b_sal);

    if (b_sal<5000)
        inc = b_sal*5/100;
    if (5000<= b_sal <10000)
        inc = b_sal*10/100;
    if (b_sal>=10000)
        inc = b_sal*15/100;

    n_sal = b_sal + inc;

    printf("Name : %s\n",name);
    printf("New Salary : %f",n_sal);
}

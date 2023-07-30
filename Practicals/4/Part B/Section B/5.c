#include <stdio.h>
int main()
{
    int en,hrs=0,ot=0,c=0,tot=0,per=0;
    printf("Enter employee number : ");
    scanf("%d",&en);

    while(en != -999){
        printf("Enter hours worked by the employee : ");
        scanf("%d",&hrs);
        if (hrs>40)
            ot = (hrs-40) * 200 + 6000;

        else
            ot = hrs * 150;
        printf("Employee number : %d",en);printf("   Over time payment : %d\n\n",ot);
        if(ot>4000)
        tot++;
        c++;
        printf("Enter employee number : ");
        scanf("%d",&en);
    }
    per = (tot*100)/c;
    printf("Percentage of employees whose Over Time Payment exceeding the Rs. 4000/- : %d%%",per);
    printf("\n%d",c);
}

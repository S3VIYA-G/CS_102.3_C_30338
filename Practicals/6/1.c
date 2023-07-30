#include <stdio.h>
int main()
{
    int i;
    float arr[10],max,min,n,sum=0,avg=0;

    for (i=0;i<10;i++){
        printf("Enter number %d : ",(i+1));
        scanf("%f",&arr[i]);
        if(i==0)
            min=max=arr[i];
        else
            if(arr[i]>max)
            max=arr[i];

            if(arr[i]<min)
            min=arr[i];

        sum+=arr[i];

    }
    avg=sum/10;
    printf("\n\n Minimum value : %.2f\n",max);
    printf(" Maximum value : %.2f\n",min);
    printf(" Average value : %.2f\n",avg);
    printf(" Reverse order of values : ");
    for(i=9;i>=0;i--){
        printf("%.2f ",arr[i]);
    }


}

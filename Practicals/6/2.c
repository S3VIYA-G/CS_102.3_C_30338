#include <stdio.h>
int main()
{
    int n;

    printf("Enter the size of the arrays : ");
    scanf("%d",&n);

    int i;
    float arr1[n],arr2[n],ssum1,ssum2,vsum[n];


    printf("\n\nEnter elements for 1st array :\n");
    for(i=0;i<n;i++){
        printf("Element %d : ",i+1);
        scanf("%f",&arr1[i]);
        ssum1+=arr1[i];
        vsum[i]=arr1[i];
    }

    printf("\n\nEnter elements for 2nd array :\n");
    for(i=0;i<n;i++){
        printf("Element %d : ",i+1);
        scanf("%f",&arr2[i]);
        ssum2+=arr2[i];
        vsum[i]+=arr2[i];
    }

    printf("\nScalar Sum of Array 1: %.2f\n",ssum1);
    printf("\nScalar Sum of Array 2: %.2f\n",ssum2);
    printf("\nVector Sum of Array 1 and Array 2 :");

    for(i=0;i<n;i++){
        printf("%.2f  ", vsum[i]);
    }

}

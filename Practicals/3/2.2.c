#include <stdio.h>
int main()
{
    int a, b, c;
    int largest, smallest;

    printf("Enter Number 1: ");
    scanf("%d", &a);
    printf("Enter Number 2: ");
    scanf("%d", &b);
    printf("Enter Number 3: ");
    scanf("%d", &c);
    printf("\n\n\n");

    largest = a;
    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;
    smallest = a;
    if (b < smallest)
        smallest = b;

    if (c < smallest)
        smallest = c;

    printf("Largest value: %d\n", largest);
    printf("Smallest value: %d\n", smallest);

}

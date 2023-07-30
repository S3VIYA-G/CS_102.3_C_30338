#include <stdio.h>
double displayPro(int num1, float num2) {
    double product = num1 * num2;
    return product;
}

int main() {
    int in;
    float fn;

    printf("Enter an integer number: ");
    scanf("%d", &in);

    printf("Enter a float number: ");
    scanf("%f", &fn);

    double pro = displayPro(in, fn);
    printf("\nProduct of %d and %.2f is: %.2f\n", in, fn, pro);

    return 0;
}

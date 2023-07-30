#include <stdio.h>

int main() {
    int employeeNo, count = 0;
    float basicSalary;

    printf("Enter the Employee No (-999 to exit): ");
    scanf("%d", &employeeNo);
    while (employeeNo != -999) {
        printf("Enter the Basic Salary: ");
        scanf("%f", &basicSalary);
        if (basicSalary >= 5000) {
            count++;
            }
        printf("\nEnter the Employee No (-999 to exit): ");
        scanf("%d", &employeeNo);
    }
        printf("\nNumber of Employees with Basic Salary >= 5000: %d\n", count);
}

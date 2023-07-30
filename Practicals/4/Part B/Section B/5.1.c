#include <stdio.h>

int main() {
    int employeeNo, count = 0, overtimeExceedCount = 0;
    float hoursWorked, overtimeRate = 150.0, overtimePayment, percentage;

    printf("Enter the Employee No (-999 to exit): ");
    scanf("%d", &employeeNo);

    while (employeeNo != -999) {
        printf("Enter the Hours Worked: ");
        scanf("%f", &hoursWorked);

        if (hoursWorked > 40) {
            overtimePayment = (hoursWorked - 40) * overtimeRate + (hoursWorked - 40) * 50;  // Overtime payment calculation
        } else {
            overtimePayment = 0;
        }

        printf("\nEmployee No: %d\n", employeeNo);
        printf("Overtime Payment: Rs. %.2f\n", overtimePayment);

        if (overtimePayment > 4000) {
            overtimeExceedCount++;
        }
        count++;

        printf("\nEnter the Employee No (-999 to exit): ");
        scanf("%d", &employeeNo);
    }

    if (count > 0) {
        percentage = (float) overtimeExceedCount / count * 100.0;
        printf("\nPercentage of Employees with Overtime Payment > Rs. 4000: %.2f%%\n", percentage);
    } else {
        printf("\nNo employees entered.\n");
    }

    return 0;
}

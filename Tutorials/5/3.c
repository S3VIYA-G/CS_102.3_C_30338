#include <stdio.h>
int main() {
    int count = 0,oddCount = 0,evenCount = 0,number;
    while (1) {
        printf("Number %d: ", count + 1);
        scanf("%d", &number);
        if(number == -99){
            break;
        }
        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        count++;
    }
    printf("\nTotal count of odd numbers: %d\n", oddCount);
    printf("Total count of even numbers: %d\n", evenCount);
}


#include <stdio.h>

int main() {
    int num1, num2;

    // Compare two integers
    printf("Enter first Number: ");
    scanf("%d", &num1);

    printf("Enter second Number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("First Number %d is larger number", num1);
    } else if (num1 == num2) {
        printf("%d and %d are equal", num1, num2);
    } else {
        printf("Second Number %d is larger number", num2);
    }
    
    return 0;
}


#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter first Number: ");
    scanf("%d", &num1);

    printf("Enter second Number: ");
    scanf("%d", &num2);
    
    printf("Enter third Number: ");
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3) {
        if (num1 == num2 && num1 == num3) {
            printf("All numbers are equal");
        } else {
            printf("Largest Number is %d", num1);
        }
    } else if ( num2 >= num3) {
        printf("Largest Number is %d", num2);
    } else {
        printf("Largest Number is %d", num3);
    }

    return 0;
}


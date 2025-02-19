#include <stdio.h>

int factorial(int n);

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %ld\n", number, factorial(number));
    }

    return 0;
}
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

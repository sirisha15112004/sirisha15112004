#include <stdio.h>

int factorial(int num) {
    if (num == 0) {
        return 1;
    }
    else {
        return num * factorial(num - 1);
    }
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int fact = factorial(number);
    printf("Factorial of %d = %d\n", number, fact);
    return 0;
}

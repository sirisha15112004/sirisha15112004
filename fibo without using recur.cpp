#include <stdio.h>
void fibonacci(int n) {
    int a = 0, b = 1, nextTerm;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
}
int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    fibonacci(terms);
    return 0;
}

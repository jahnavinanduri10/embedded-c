#include <stdio.h>

int (*factPtr)(int);

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;

    return n * factPtr(n - 1);
}

int main() {
    int num = 5;

    factPtr = factorial;

    int result = factPtr(num);

    printf("Factorial of %d = %d\n", num, result);

    return 0;
}
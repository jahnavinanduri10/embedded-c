#include <stdio.h>

typedef int (*Operation)(int, int);

typedef struct {
    Operation add;
    Operation subtract;
    Operation multiply;
} Calculator;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    Calculator calc = {
        .add = add,
        .subtract = subtract,
        .multiply = multiply
    };

    int x = 10, y = 5;

    printf("Add: %d\n", calc.add(x, y));
    printf("Subtract: %d\n", calc.subtract(x, y));
    printf("Multiply: %d\n", calc.multiply(x, y));

    return 0;
}
#include <stdio.h>

typedef int (*TransformFunc)(int);

int doubleValue(int x) {
    return x * 2;
}

int increment(int x) {
    return x + 1;
}


int square(int x) {
    return x * x;
}

TransformFunc pipeline[] = {
    doubleValue,
    increment,
    square
};

int main() {
    int value = 3;
    int steps = sizeof(pipeline) / sizeof(pipeline[0]);

    printf("Initial value: %d\n", value);

    for (int i = 0; i < steps; i++) {
        value = pipeline[i](value);  
        printf("After step %d: %d\n", i + 1, value);
    }

    printf("Final result: %d\n", value);

    return 0;
}
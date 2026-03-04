#include <stdio.h>

typedef enum{
    OP_ARITHMETIC,
    OP_BITWISE,
    OP_COUNT
}Operataion_type;

typedef enum {
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_COUNT
} DataType;

typedef int   (*IntOpFunc)(int, int);
typedef float (*FloatOpFunc)(float, float);

int intAdd(int a, int b) {
    return a + b;
}

float floatAdd(float a, float b) {
    return a + b;
}

int intAnd(int a, int b) {
    return a & b;
}

float invalidFloatOperation(float a, float b) {
    printf("Bitwise operation not supported for float\n");
    return 0.0f;
}

void *operations[OP_COUNT][TYPE_COUNT] = {
    {
        intAdd,
        floatAdd
    },
    {
        intAnd,
        invalidFloatOperation
    }
};

int main() {
    int a = 10, b = 5;
    IntOpFunc intFunc = (IntOpFunc)operations[OP_ARITHMETIC][TYPE_INT];
    printf("Int Add: %d\n", intFunc(a, b));

    float x = 3.5f, y = 2.5f;
    FloatOpFunc floatFunc = (FloatOpFunc)operations[OP_ARITHMETIC][TYPE_FLOAT];
    printf("Float Add: %.2f\n", floatFunc(x, y));

    intFunc = (IntOpFunc)operations[OP_BITWISE][TYPE_INT];
    printf("Int AND: %d\n", intFunc(a, b));

    floatFunc = (FloatOpFunc)operations[OP_BITWISE][TYPE_FLOAT];
    floatFunc(x, y);

    return 0;
}
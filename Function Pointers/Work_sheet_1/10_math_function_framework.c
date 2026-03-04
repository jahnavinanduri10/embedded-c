#include <stdio.h>
#include <math.h>

typedef double (*MathFunc)(double);

double sin_wrapper(double x){
    return sin(x);
}

double cos_wrapper(double x){
    return cos(x);
}

double tan_wrapper(double x){
    return tan(x);
}

double log_wrapper(double x){
    return log(x);
}

typedef enum{
        SIN_FUNC = 0,
        COS_FUNC,
        TAN_FUNC,
        LOG_FUNC,
        FUNC_COUNT
}Math_func_type;

MathFunc math_functions[FUNC_COUNT] = {
    sin_wrapper,
    cos_wrapper,
    tan_wrapper,
    log_wrapper
};

int main()
{
    int choice;
    double input,res;

    printf("Select math function:\n");
    printf("0 - sin(x)\n");
    printf("1 - cos(x)\n");
    printf("2 - tan(x)\n");
    printf("3 - log(x)\n");

      printf("\nEnter choice: ");
    scanf("%d", &choice);

    if (choice < 0 || choice >= FUNC_COUNT) {
        printf("Invalid choice\n");
        return 0;
    }

    printf("Enter input value: ");
    scanf("%lf", &input);

    res = math_functions[choice](input);

    printf("Result = %lf\n", res);
}
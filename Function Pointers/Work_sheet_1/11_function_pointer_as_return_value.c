#include <stdio.h>
#include <string.h>

typedef int (*Operation_func)(int,int);
int add(int a,int b)
{
    return a+b;
}

int subtract(int a,int b)
{
    return a-b;
}

int multiply(int a,int b)
{
    return a * b;
}

Operation_func get_operation(char *name)
{
    if(strcmp(name, "add") == 0)
        return add;
    else if(strcmp(name, "sub") == 0)
        return subtract;
    else if(strcmp(name, "multiply") == 0)
        return multiply;
    else
        return NULL;
}

int main()
{
    char operation[30];
    int x,y;

    printf("Enter operation (add / subtract / multiply): ");
    scanf("%s", operation);

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    Operation_func op = get_operation(operation);

    if(op != NULL)
    {
        int res = op(x,y);
        printf("Res = %d\n",res);
    }
    else 
        printf("Invalid operation");
}
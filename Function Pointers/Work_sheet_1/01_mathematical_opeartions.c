#include <stdio.h>

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a+b;
}

int div(int a,int b)
{
    return a/b;
}

void cal(int a,int b,int(*op)(int,int))
{
    printf("%d ",op(a,b));
}

int main()
{
    int a = 10,b = 5;
    cal(a,b,add);
    cal(a,b,sub);
    cal(a,b,mul);
    cal(a,b,div);
}
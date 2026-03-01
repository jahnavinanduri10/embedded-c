#include <stdio.h>

typedef struct{
   int id;
   float salary;
}info;

info modify_using_structure(info s)
{
    s.id = 34;
    s.salary = 15000;
    return s;
}

void modify_using_pointer(info *s)
{
    s->id = 23;
    s->salary = 900000;
}

int main()
{
    info s1;
    s1.id = 89;
    s1.salary = 800000;

    info res = modify_using_structure(s1);
    printf("After modifying using structure: \n");
    printf("Id = %d\n",s1.id);
    printf("Salary = %.2f\n",s1.salary);
    
    modify_using_pointer(&s1);


    printf("After modifying using pointer: \n");
    printf("Id = %d\n",s1.id);
    printf("Salary = %.2f\n",s1.salary);
   
}
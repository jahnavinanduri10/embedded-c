/*Structures and Functions
Goal
Learn how to pass structures to and return structures from functions and understand the trade-offs between pass-by-value and pass-by-reference.
Activity
•	Write a function that takes a structure as a value argument and modifies it.
•	Write a function that takes a pointer to structure and modifies it.
•	Return a structure from a function and print its values.
•	Measure memory usage and performance difference between pass-by-value and reference.
Tip: Prefer passing by pointer in embedded systems for performance and memory efficiency.*/

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
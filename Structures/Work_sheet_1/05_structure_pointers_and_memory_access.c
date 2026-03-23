/*Structure Pointers and Memory Access
Goal
Understand the use of pointers to structures for efficient memory access and how to use the arrow operator for member access.

Activity
•	Declare a pointer to a structure and allocate memory using malloc().
•	Use arrow operator to assign and print structure member values.
•	Simulate memory-mapped peripheral access using structure pointers.
•	Illustrate how structure pointers simplify code in register programming.
Tip: Always initialize structure pointers and check for NULL before dereferencing.*/

#include <stdio.h>
#include <stdlib.h>

struct peripheral{
    int reg1;
    int reg2;
    int reg3;
};

int main()
{
    struct peripheral *ptr;

    ptr = (struct peripheral*)malloc(sizeof(struct peripheral));
    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }

    ptr->reg1 = 0x01;
    ptr->reg2 = 0x02;
    ptr->reg3 = 0x03;

    printf("Reg1 = %d, Reg2 = %d, Reg3 = %d\n",ptr->reg1,ptr->reg2,ptr->reg3);

    free(ptr);
}
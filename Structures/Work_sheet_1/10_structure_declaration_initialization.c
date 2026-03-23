/*Structure Declaration and Initialization
Goal
Understand the proper way to declare and initialize structures using multiple techniques and best practices.
Activity
•	Declare structure variables globally, locally, and statically.
•	Use designated initializers for clarity.
•	Use typedef to create aliases for complex structures.
•	Discuss structure initialization in embedded register mapping.
Tip: Static initialization is preferred for compile-time register definitions*/

#include <stdio.h>

typedef struct{
    int id;
    char name[20];
}device;

device g_dev = {.id = 1,.name = "Global"};

int main()
{
    device l_dev = {.id = 2,.name = "Local"};

    static device s_dev = {.id = 3,.name = "Static"};

    printf("Global: id = %d, name = %s\n",g_dev.id,g_dev.name);
    printf("Local: id = %d, name = %s\n",l_dev.id,l_dev.name);
    printf("Static: id = %d, name = %s\n",s_dev.id,s_dev.name);
}
/* Structure vs Union in Embedded Systems
Goal
Understand how structures and unions differ in terms of memory layout, access, and use in embedded systems, particularly in data interpretation and memory saving.
Activity
•	Define a structure and a union with three different data types (e.g., char, int, float).
•	Print the size of each and compare.
•	Write values to each member and observe the behavior.
•	Map the union onto a byte buffer and visualize how different types share memory.
•	Document a scenario where only one data type is valid at a time (e.g., packet command structure).
Tip: Use sizeof() and printf() to track memory usage and value overlap*/

#include <stdio.h>
#include <stdlib.h>

struct Data{
    int a;
    float f;
    char ch;
};

union Info{
    int a;
    float f;
    char ch;
};

int main()
{
    struct Data d;
    union Info i;

    printf("Szie of the structure is %d\n",sizeof(d));
    printf("Szie of the union is %d\n",sizeof(i));

    d.a = 2;
    d.f = 1.5;
    d.ch = 'a';

    i.a = 2;
    i.f = 1.5;
    i.ch = 'b';

    printf("Structure details: \n");
    printf("int = %d\n",d.a);
    printf("float = %.2f\n",d.f);
    printf("char = %c\n",d.ch);

    printf("Union details: \n");
    printf("int = %d\n",i.a);
    printf("float = %.2f\n",i.f);
    printf("char = %c\n",i.ch);


}
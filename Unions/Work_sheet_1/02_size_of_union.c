/*2.	Size of Union
Write a program to declare a union containing an int, a double, and a char.
Print the size of this union using sizeof. Compare the result with the size of a structure having the same members.
*/
#include <stdio.h>

union Data {
    int num;
    double d;
    char ch;
};

int main()
{
    union Data d;

    printf("Size of the union: %d",sizeof(d));
}
//Write a program to convert a Little Endian integer to its Big Endian equivalent.
#include <stdio.h>

unsigned int little_to_big_endian(unsigned int num)
{
    return (((num >> 24) & 0x000000FF) | ((num >> 8) & 0x0000FF00) | ((num << 8) & 0x00FF0000) | ((num << 24) & 0xFF000000));
}

int main()
{
    unsigned int little = 0xAABBCCDD;
    unsigned int big = little_to_big_endian(little);

    printf("Little endian: 0x%X\n",little);
    printf("Big endian: 0x%X\n",big);
}
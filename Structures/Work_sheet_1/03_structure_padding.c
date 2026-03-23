/*Structure Padding, Alignment, and Packing
Goal
Understand how padding affects structure size and how to control layout using packing directives.
Activity
•	Log Session a structure with mixed data types (char, int, short).
•	Check the size and member offsets using sizeof() and pointer arithmetic.
•	Reorder members to reduce padding and observe the change in size.
•	Use #pragma pack(1) and compare memory layout.
•	Simulate a communication packet where field alignment matters.
Tip: Use offsetof() macro to determine the byte offset of each field.*/


#include <stdio.h>
#include <stddef.h>

struct padding{
    char ch;
    int a;
    short b;
};

struct optimized{
    int a;
    short b;
    char ch;
};

#pragma pack(1)
struct packed{
    char ch;
    int a;
    short b;
};
#pragma pack()

struct Packet{
    char start_flag;
    int data;
    short crc;
    char end_flag;
};

int main()
{
    printf("Original structure:\n");
    printf("Size: %zu bytes\n",sizeof(struct padding));
    printf("Offsets: ch = %zu, a = %zu, b = %zu\n",
    offsetof(struct padding,ch),offsetof(struct padding,a),offsetof(struct padding,b));

    printf("\nOptimized structure:\n");
    printf("Size: %zu bytes\n",sizeof(struct optimized));
    printf("Offsets: a = %zu, b = %zu, ch = %zu\n",
    offsetof(struct padding,a),offsetof(struct padding,b),offsetof(struct padding,ch));

    printf("\nPacked structure:\n");
    printf("Size: %zu bytes\n",sizeof(struct packed));
    printf("Offsets: ch = %zu, a = %zu, b = %zu\n",
    offsetof(struct packed,ch),offsetof(struct packed,a),offsetof(struct packed,b));

    printf("\nPacket structure:\n");
    printf("Size: %zu bytes\n",sizeof(struct Packet));
    printf("Offsets: start_flag = %zu, data = %zu, crc = %zu, end_flag = %zu\n",
    offsetof(struct Packet,start_flag),offsetof(struct Packet,data),offsetof(struct Packet,crc),offsetof(struct Packet,end_flag));
}
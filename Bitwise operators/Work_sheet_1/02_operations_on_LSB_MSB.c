/*Write a program to perform the following operations on the Least and Most Significant Bits (LSB/MSB) of a given integer:
Set the LSB to 1
Clear the LSB (set to 0)
Toggle the LSB
Set the MSB to 1
Clear the MSB (set to 0)
Toggle the MSB
Set a specific bit to 1
Clear a specific bit
Toggle a specific bit*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    //set LSB bit
    printf("After setting the LSB bit: %d\n",(num | 1));

    //clear LSB bit
    printf("After clearing the LSB bit: %d\n",(num & ~1));

    //toggle LSB bit
    printf("After toggling the LSB bit: %d\n",(num ^ 1));

    //set MSB bit
    printf("After setting the MSB bit: %d\n",num | (1 << 32));

    //clear MSB bit
    printf("After clearing the MSB bit: %d\n",num & ~(1 << 32));

    //toggle MSB bit
    printf("After toggling the MSB bit: %d\n",num ^ (1 << 32));

    int pos;
    printf("Enter the position to set: ");
    scanf("%d",&pos);
    printf("After setting the position: %d\n",(num | (1 << pos)));

    printf("Enter the position to clear: ");
    scanf("%d",&pos);
    printf("After clearing the position: %d\n",(num & (~(1 << pos))));

    printf("Enter the position to toggle: ");
    scanf("%d",&pos);
    printf("After toggling the position: %d\n",(num ^ (1 << pos)));

}
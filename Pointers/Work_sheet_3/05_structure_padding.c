#include <stdio.h>
#include <stddef.h>

struct PeripheralRegs {
  char status;
  int control;
  short error;
};

struct __attribute__((packed)) PeripheralRegsPacked{
  char status;
  int control;
  short error;
};

int main()
{
    printf("Original structure:\n");
    printf("Size: %zu bytes\n",sizeof(struct PeripheralRegs));
    printf("Offsets: status = %zu, control = %zu, error = %zu\n",
    offsetof(struct PeripheralRegs,status),offsetof(struct PeripheralRegs,control),offsetof(struct PeripheralRegs,error));

     printf("Packed structure:\n");
    printf("Size: %zu bytes\n",sizeof(struct PeripheralRegsPacked));
    printf("Offsets: status = %zu, control = %zu, error = %zu\n",
    offsetof(struct PeripheralRegsPacked,status),offsetof(struct PeripheralRegsPacked,control),offsetof(struct PeripheralRegsPacked,error));
}
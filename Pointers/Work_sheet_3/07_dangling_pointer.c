#include <stdio.h>
#include <stdlib.h>


int *allocate_buffer(void) {
  int *buf = (int *)malloc(10 * sizeof(int));
  return buf;
}

int main()
{
    int *buff = allocate_buffer();
    *buff = 2;
    free(buff);
    *buff = 3;
}
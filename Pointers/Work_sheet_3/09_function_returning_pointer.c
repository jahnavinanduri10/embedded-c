#include <stdio.h>

typedef int (*CalibArrayPtr)[10];

CalibArrayPtr get_calibration_data(void)
{
        static int calibration[10] = {1,2,3,4,5,6,7,8,9,10};
        return &calibration;
}

int main()
{
    CalibArrayPtr data = get_calibration_data();

    for(int i = 0;i < 10;i++)
        printf("%d ",(*data)[i]);
}
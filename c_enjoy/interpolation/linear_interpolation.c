#include <stdio.h>

//변환할 수,
//현재 변환 값의 하한,
//현재 변환 값의 상한,
//목표 변환 값의 하한,
//목표 변환 값의 상한

long map(long x, long in_min, long in_max, long out_min, long out_max)
{

    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

int main(void)
{

    printf("%ld\n", map(100, 0, 1023, 0, 255));
    return 0;
}
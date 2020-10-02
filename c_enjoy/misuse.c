#include <stdio.h>

int imax(int, int);

int main(void)
{
    printf("(%d,%d)에서 큰 수는 %d\n", 3, 5, imax(3, 5));
    printf("(%d,%d)에서 큰 수는 %d\n", 3, 5, imax(3.0, 5.0));

    return 0;
}

int imax(int n, int m)
{
    int max;

    if (m > n)
        max = m;
    else
        max = n;

    return max;
}
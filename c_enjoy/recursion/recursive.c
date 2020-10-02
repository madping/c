#include <stdio.h>
void up_and_down(int);

int main(void)
{
    up_and_down(1);
    return 0;
}

void up_and_down(int n)
{
    printf("level %d: n의 메모리 주소 %p\n", n, &n);

    if (n < 4)
        up_and_down(n + 1);
    printf("level %d: n의 메모리 주소 %p\n", n, &n);
}

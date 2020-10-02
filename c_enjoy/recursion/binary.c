#include <stdio.h>
void to_binary(unsigned long n);

int main(void)
{
    unsigned long number;
    printf("정수 하나를 입력 하시오.: \n");

    while (scanf("%lu", &number) == 1)
    {
        printf("2진수 표기:");
        to_binary(number);
        putchar('\n');
        printf("정수 하나를 입력 하시오.: \n");
    }
    printf("종료!\n");

    return 0;
}

void to_binary(unsigned long n)
{
    int r;

    r = n % 2;

    if (n >= 2)
        to_binary(n / 2);
    putchar('0' + r);

    return;
}
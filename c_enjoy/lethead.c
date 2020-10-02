#include <stdio.h>
#include <string.h>

#define NAME "TCL; Thecnical Communication Laboratory"
#define ADDRESS "106-1 osanri"
#define PLACE "ULSAN"
#define WIDTH 50
#define SPACE ' '

void show_n_char(char ch, int num);

void show_n_char(char ch, int num)
{
    int count;
    for (count = 1; count <= num; count++)
        putchar(ch);
}

int main()
{
    int spaces;

    show_n_char('*', WIDTH);
    putchar('\n');
    show_n_char(SPACE, 6);
    printf("%s\n", NAME);
    spaces = (WIDTH - strlen(ADDRESS)) / 2;

    show_n_char(SPACE, spaces);
    printf("%s\n", ADDRESS);
    show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);

    printf("%s\n", PLACE);
    show_n_char('*', WIDTH);
    putchar('\n');

    return 0;
}
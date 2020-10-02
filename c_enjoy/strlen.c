#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *name = "blockDMask";
    printf("1. const char* name=\"blockDMask\"");
    printf("\tlen : %d\n", (int)strlen(name));

    char arr1[50] = "blockDMask";
    printf("2. char arr1[50]=\"blockDMask\"");
    printf("\tlen : %d\n", (int)strlen(arr1));

    char arr2[50] = "block\0DMask";
    printf("3. char arr2[50]=\"block\\0DMask\"");
    printf("\tlen : %d\n", (int)strlen(arr2));

    return 0;
}

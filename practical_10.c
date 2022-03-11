#include <stdio.h>

int main()
{
    int x,i, j, sp = 6;

    for (i = 1; i <= 4; i++)
    {
        for (x = 1; x <= sp; x++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d   ", i);
        printf("\n");
        sp = sp - 2;
    }

    return 0;
}
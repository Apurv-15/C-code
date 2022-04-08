#include <stdio.h>
int main()
{
    int i, j, a, x = 1;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }
        for (a = 1; a <= i; a++)
        {
            printf(" %d ", x);
            x++;
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{

    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\n", i, i * 2, i * 3, i * 4, i * 5);
    }
    return 0;
}
#include <stdio.h>
void main()
{
    int i, x[6], sum = 0;
    printf("Enter 6 number\n");

    for (i = 0; i < 6; i++)
    {
        scanf("%d", x + i);
        sum += *(x + i);
    }
    printf("Sum is %d",sum);
}

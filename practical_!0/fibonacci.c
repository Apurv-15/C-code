#include <stdio.h>
 void main()
{
    int a = 0, b = 1, c, n, i;
    printf("Enter the number of terms to print\n");
    scanf("%d", &n);

    printf("terms in fibonnaci series : %d,%d,", a, b);
    for (i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d,", c);
        a = b;
        b = c;
    }  
}
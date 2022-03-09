#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c, big, big_1;
    printf("Enter 3 number\n");
    scanf("%d %d %d", &a, &b, &c);

    big = ((a > b) ? a : b);
    big_1 = ((big > c) ? big : c);

    printf("\nThe biggest number is : %d", big_1);
    
}
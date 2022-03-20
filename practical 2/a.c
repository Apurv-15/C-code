#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);
    b = a--;
    printf("post decrement value of a is %d \n", b);
    b = --a;
    printf("pre decrement value of a is %d \n", b);
    return 0;
}
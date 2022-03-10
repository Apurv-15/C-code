#include <stdio.h>
void main()
{
    int a, b, num;
    printf("Enter 2 number\n");
    scanf("%d %d", &a, &b);

    printf("Enter the number according the menu \n 1.Addition  2.Subtraction  3.Multiplication  4.Division\n");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Addition of 2 number is %d", a + b);
        break;
    case 2:
        printf("Subtraction of 2 number is %d", a - b);
        break;
    case 3:
        printf("Multiplication of 2 number is %d", a * b);
        break;
    case 4:
        printf("Division of 2 number is %d", a / b);
        break;

    default:
        printf("Pls enter from given menu");
         break;
    }
}
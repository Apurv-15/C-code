#include <stdio.h>
int main()
{
    int a, b, c, isRight = 0, type = 0;
    printf("enter three sides of trianle\n");
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        if ((a == b) && (b == c))
        {
            type = 1;
        }
        else if ((a == b) || (b == c) || (c == a))
        {
            type = 2;
        }
        else
            type = 3;
    }
    else
    {
        printf("the sides do not form a triangle");
    }
    a = a * a;
    b = b * b;
    c = c * c;
    if ((a == b + c) || (b == a + c) || (c == a + b))
    {
        isRight = 1;
    }
    switch (type)
    {
    case 1:
        printf("It is an Equilateral Triangle\n");
        break;
    case 2:
        printf("It is an Isosceles Triangle\n");
        break;
    case 3:
        if (isRight)
            printf("It is a scalene RightAngled Triangle\n");
        else
            printf("It is a Scalene Triangle\n");
        break;
    }
    return 0;
}
#include <stdio.h>
void main()

{
    int a, b, c, equi, type = 0, is_right = 0;
    printf("Enter 3 sides of triangle\n");
    scanf("%d %d %d ", &a, &b, &c);

    if ((a == b) && (b == c) && (c == a))

    {
        type = 1;
    }

    else if ((a == b) || (b == c) || (c == a))
    {
        type = 2;
    }
    else
    {
        type = 3;
    }


    a = a * a;
    b = b * b;
    c = c * c;
    if ((a + b = c) || (b + c = a) || (a + c = b))
    {
        is_right = 1
    }

    switch (type)
    {
    case 1:
        printf("Triangle is equilateral triangle");
        break;

    case 2:
        printf("Triangle is isosceles triangle");
        break;

    case 3:
        if (is_right)
            printf("Triangle is scalene right angled triangle");
        else
            printf("Triangle is scalene triangle");
        break;

    default:
        printf("Given side do not form a triangle");
        break;
    }
}
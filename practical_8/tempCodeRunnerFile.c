#include <stdio.h>
void main()
{
    int month;
    printf("1.January\t2.february\t3.march\t4.april\t5.May\t6.june\n");
    printf("7.july\t8.August\t9.September\t10.October\t11.November\t12.December\n");
    printf("Enter your choice from 1-12\n");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        printf("This is a summer season");
        break;

    case 5:
    case 6:
    case 7:
    case 8:
        printf("This is a rainy season");
        break;

    case 9:
    case 10:
    case 11:
    case 12:

        printf("This is a winter season");
        break;

    default:
        printf("Invalid ");
        break;
    }
}

// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int days;
    printf("Enter the number for week\n");
    scanf("%d", &days);

    switch (days)
    {
    case 1:
        printf("Its monday");
        break;

    case 2:
        printf("Its Tuesday");
        break;

    case 3:
        printf("Its wednesday");
        break;

    case 4:
        printf("Its thrusdau");
        break;
    case 5:
        printf("Its friday");
        break;

    case 6:
        printf("Its saturday");
        break;

    case 7:
        printf("Its saturday");
        break;

    default:
        printf("Pls put number from 1 to 7 ");
        break;
    }

    return 0;
}
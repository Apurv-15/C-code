#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d",&marks);

    switch (marks/10)
    {
    case 10:
    case 9:
    case 8:
    case 7:
        printf("Distinction=%d",marks);
        break;
    case 6:
        printf("First class=%d",marks);
        break;

    case 5:
        printf("Second class=%d",marks);
        break;

    default:
        printf("fail");
        break;
    }
}
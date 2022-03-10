#include <stdio.h>
void main()
{
    int a, y, cube;
    char ch;

    do
    {
        printf("Enter the number:");
        scanf("%d", &a);

        cube = a * a * a;
        printf("The cube of  number is:%d\n", cube);
        printf("Do you want to continue: y/n");
        scanf("%c",&ch);

        ch = getchar();
       
    } while (ch == 'y');
}


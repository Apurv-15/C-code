#include <stdio.h>
int main()
{
    int i, num;

    printf("enter the number till where you want the even numbers\n ");
    scanf("%d", &num);

    printf("Even numbers from 1 to %d are as follows \n", num);
    for(i=0; i<=num; i+2)
    {
        printf("%d",i);
    }

    return 0;
}
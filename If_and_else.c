#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,max;
    printf("Enter a and b\n");
    scanf("%d %d", &a,&b);

    max=(a>b)? a:b ;
    printf("The greates number is %d",max);

}
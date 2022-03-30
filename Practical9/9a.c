#include<stdio.h>
void main()
{
    int num,d,n,sum=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    n=num;

    while (n!=0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    printf("The sum of number is %d=%d",num,sum);
}
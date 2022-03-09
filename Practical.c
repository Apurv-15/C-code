#include<stdio.h>
int main()
{
    int a,c;
    printf("Enter the number\n");
    scanf("%d",&a);
    c=a++;
    printf("a++=%d\n",c);

    c=++a;
    printf("++a=%d\n",c);
    return 0;
}
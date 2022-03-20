#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter values of a and b\n");
scanf("%d %d" ,&a,&b);
c=a+b;
printf("Addition of a and b is %d\n ",c);
c= a-b;
printf("Subtraction of a and b is %d\n", c);
c= a*b;
printf("Multiplication of a and b is %d\n",c);
c= a/b;
printf("division of a and b is %d\n", c);
return 0;
}
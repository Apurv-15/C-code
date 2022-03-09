#include<stdio.h>
void main()
{
    int num,sum=0,n,d;
    printf("Enter a number\n");
    scanf("%d",&num);
   
    n=num;
    while (n!=0)
    {
        d=n/10;
    
    sum=sum + (d*d*d);
    n=n/10;
    }

    if(sum==num)
    {
        printf("%d is an arm strong number",num);
    }

    else
        printf("%d is not a armstrong number\n",num);

  }

    


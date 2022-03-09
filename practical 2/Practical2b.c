#include<stdio.h>
void main()
{
    int a,b;
    float c;
    printf("Enter 2 integer\n");
    scanf("%d %d",&a,&b);

    c=a/b;
    printf("\nResult of interger division without type cascading %0.3f.",c);
    
    //perform cascading-----------

    c=(float)a / (float)b;
    printf("\nResult of integer division after type cascading %0.3f.",c);
    getch();
    
}
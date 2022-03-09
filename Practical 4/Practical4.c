#include<stdio.h>
#define pi 3.142
void main()
{
    float l,b,peri,r,ar,area_circle,circ_circle;
    printf("Pls enter the length for the rectangle:-\n");
    scanf("%f",&l);
    printf("Pls enter the breadth for the rectangle:-\n");
    scanf("%f",&b);


    ar=l*b;
    peri=(2*(l+b));

    printf("The area of rectangle is %0.3f\n",ar);
    printf("The perimeter of rectangle is %0.2f\n\n",peri);

//    To find circumference and area of circle-----------------------------------------------------

    printf("Enter the radius of circle:-\n");
    scanf("%f",&r);
    area_circle=pi*r*r;
    circ_circle=2*pi*r;

    printf("The area of circle is %0.2f\n",area_circle);
    printf("The circumference of circle is %0.2f\n",circ_circle);
    getch();

}
#include<stdio.h>
void main()
{
    float km,meter,miles;
    printf("Enter kilometer to convert into meter and miles\n");
    scanf("%f",&km);

    meter= km*1000;
    miles= km/ 1.6;

    printf("Kilometer into miles calculation is %0.2f\n",miles);
    printf("Kilometer into meter calculation is %0.2f",meter);

}
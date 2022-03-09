#include<stdio.h>
void main()
{
    float temp_celcius,temp_f;
    printf("Enter the temperaue in fahreheit\n");
    scanf("%f",&temp_f);

    temp_celcius=(temp_f-32)*5/9;

    printf("The temperature in celcius is %0.3f",temp_celcius);

}
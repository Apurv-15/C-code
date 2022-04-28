#include <stdio.h>
struct distance
{
    float km_mtr;
} firstDistance, secondDistance, sum;
void main()
{
    printf("Enter distance in kilo-meter");
    scanf("%f", &firstDistance.km_mtr);

    printf("Enter second distance in kilo-meter");
    scanf("%f", &secondDistance.km_mtr);

    sum.km_mtr = firstDistance.km_mtr + secondDistance.km_mtr;

    printf("Sum in kilo-meter is %f", sum.km_mtr);
}

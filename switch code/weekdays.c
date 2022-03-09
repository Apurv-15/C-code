#include<stdio.h>
void main()
{
    int week;
    printf("Enter week number (1-7)\n");
    scanf("%d",&week);

    switch (week)
    
    {
        case 1:
            printf("Monday");
            break;
        
        case 2:
            printf("Tuesay");
            break;
        
        case 3:
            printf("Wednesday");
            break;
        
        case 4:
            printf("Thrusday");
            break;
        
        case 5:
            printf("Friday");
            break;
        
        case 6:
            printf("Saturday");
            break;
        
        case 7:
            printf("Sunday");
            break;

        default:
            printf("Invalid input ! Please enter the week number betewwn 1-7");
        
     
    }
}
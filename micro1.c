#include <stdio.h>
#include <string.h>
#include <conio.h>
char source[20], des[20], train[40];
char station[40], cla[40];
int i, time1, time2, a[55];
void booking()
{
    int ph,i, j, a1, a2, b, c, x = 0, d, e, r;
    char source, des, name;
    printf("Enter Number Of Passengers: ");
    scanf("%d", &j);
    printf("\nEnter name of passenger:");
    scanf("%c",&name);
    gets(&name);
    printf("\nEnter PhNo:");
    scanf("%c",&ph);
    printf("\nEnter The Source Place: ");
    scanf("%c", &source);
    gets(&source);
    printf("\nEnter The Destination Place: ");
    scanf("%c", &des);
    gets(&des);
    
}
void main()
{
    int option;
    printf("\n\n\n\n\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                  WELCOME                  =");
    printf("\n\t\t\t        =                     TO                    =");
    printf("\n\t\t\t        =                Train Ticket               =");
    printf("\n\t\t\t        =               Booking  SYSTEM             =");
    printf("\n\t\t\t        =                                           =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getchar();
    printf("\n\t\t|\t CHOOSE WHAT TO DO\t\t\t |");
    printf("\n\t\t|\t ___________\t |");

    printf("\n\t\t|\t| 1. Book new tickets\t\t|\t |");
    printf("\n\t\t|\t| 2. Cancel booked trips\t|\t |");
    printf("\n\t\t|\t| 3. Check upcoming travels\t|\t |");
    printf("\n\t\t|\t| 4. Exit\t\t\t|\t |");
    printf("\n\t\t|\t ___________\t |");
    printf("\n\n\n\tEnter your option from 1 to 4:");
    scanf("%d", &option);
    if (option == 1)
    {
        booking();
    }
    else if (option == 4)
    {
        printf("\n\tThanks for visiting");
    }
    else if (option == 3)
    {
        printf("1.RAJDHANI EXPRESS\n2.DECCAN QUEEN\n3.VANDE BHARAT EXPRESS\n4.DURUNTO EXPRESS\n5.TEJAS EXPRESS\n");
    }
    else
    {
        printf("invalid input");
    }

    printf("\t\tThe Following Trains "
           "Are Available.....\n");
    printf("\t\t1. Rajdhani Express.."
           ".......10:00 "
           "a.m........Sealdah Station\n");
    printf("\t\t2. Satabdi Express..."
           ".......05:00 "
           "p.m........Howrah Station\n");
    printf("\t\t3. Humsafar Express..."
           ".......11:00 "
           "p.m........Kolkata Chitpur"
           " Station\n");
    printf("\t\t4. Garib-Rath Express"
           ".........05:00 "
           "p.m........Sealdah Station\n");
    printf("\t\t5. Duronto Express..."
           ".........07:00 "
           "a.m.........Santraganchi"
           "Station\n");
    scanf("%d", &i);
}
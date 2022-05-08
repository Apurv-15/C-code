#include <stdio.h>
#include <string.h>
#include <conio.h>
struct passenger
{
    int age;
    char name[100];
    char gender[50];
};

// Global variables
char source[200], des[200], train[200];
char station[40],val[20];
int cla, seat_no;
char end;
int time1, time2, i, j, a, b, c, d, e, f, g, h;

void booking()
{
    // details();

    printf("\nEnter start location:\n");
    scanf("%c", &source);
    gets(source);
    printf("\nEnter destination location:");
    scanf("%c", &des);
    gets(des);
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
    printf("\nChoose train:");
    scanf("%d", &e);

    switch (e)
    {
        case 1:
        {
            strcpy(train, "Rajdhani Express");
            strcpy(station, "Sealdah Station");
        }
        break;

        case 2:
        {
            strcpy(train, "Satabdi Express");
            strcpy(station, "Howrah Station");
        }
        break;
        case 3:
        {
            strcpy(train, "Humsafar Express");
            strcpy(station, "Kolkata Chitpur Express");
        }
        break;
        case 4:
        {
            strcpy(train, "Garib-Rath Express");
            strcpy(station, "Sealdah Station");
        }
        break;
        case 5:
        {
            strcpy(train, "Duronto Express");
            strcpy(station, "Santraganchi Station");
        }
        break;
        default:
        printf("Enter Correct choice.....\n");
        break;
    }
}
void class()
{
    printf("\t\tEnter Your Choice......\n");
    printf("\t\t1. Slepper Class....\n");
    printf("\t\t2. A.C Class.......\n");
    scanf("%d", &i);
    if (i == 2)
    {
        printf("1. 3A Class\n");
        printf("2. 2A Class\n");
        printf("3. 1A Class\n");
        scanf("%d", &cla);
    }
}
void seat()
{
    int i;
    printf("\t		 -:SEAT MATRIX:-	 \n");
    printf("\t(U) (M)	 (L) (L) "
           " (U)\n\n");
    printf("\t01 02	 03\t04	 "
           "05\n\n");
    printf("\t06 07	 08\t09	 "
           "10\n");
    printf("\t11 12	 13\t14	 "
           "15\n\n");
    printf("\t16 17	 18\t19	 "
           "20\n");
    printf("\t21 22	 23\t24	 "
           "25\n\n");
    printf("\t26 27	 28\t29	 "
           "30\n");
    printf("\tEnter Seat Numbers: \n");
    scanf("%d", &seat_no);
    // gets(seat_no);
}

void details()
{

    int z, u;
    char gen[6];
    printf("\nEnter The Passenger Name: ");
    scanf("%c", &val);
    gets(val);
    printf("\nEnter The Passenger Gender: ");
    scanf("%c", &gen);
    gets(gen);
    printf("\nEnter The Passenger Age: ");
    scanf("%d", &u);
}
void bill()
{
    printf("\t---------------Ticket----------------");
    printf("\nPassenger name: ");
    puts(val);
    printf("\t\tSource Place: ");
    puts(source);
    printf("\t\tDestination Place: ");
    puts(des);
    printf("\t\tThe Boarding Station: ");
    puts(station);
    printf("\t\tTrain Is: %s", train);
    puts(train);
    printf("\t\tAllocated Class: %d\n", cla);
    puts(cla);
    printf("\t\tTotal Bill Amount:Rs 3000\n");
    printf("\t\tAllocated Seat Are: %d\n", seat_no);
    puts(seat_no);
    printf("\t\t\t\tThank You......Your ticket has been booked successfully\n");
}
void trains()
{

    printf("\n=-=-=-=-=- List Of upcoming Trains -=-=-=-=-=");
    printf("\n\n1.RAJDHANI EXPRESS\n2.DECCAN QUEEN\n3.VANDE BHARAT EXPRESS\n4.DURUNTO EXPRESS\n5.TEJAS EXPRESS\n");
    // printf("\n\t\tPress any key to return to MAIN MENU.......");
    // getchar();
    // flag=0;
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
end:
    printf("\n\t\t|\t CHOOSE WHAT TO DO\t\t\t |");
    printf("\n\t\t|\t _____\t |");

    printf("\n\t\t|\t| 1. Book new tickets\t\t|\t |");
    printf("\n\t\t|\t| 2. Check upcoming travels\t|\t |");
    printf("\n\t\t|\t| 3. Exit\t\t\t|\t |");
    printf("\n\t\t|\t _____\t |");
    printf("\n\n\n\tEnter your option:");
    scanf("%d", &option);
    if (option == 1)
    {
        booking();
        details();
        class();
        seat();
        bill();
    }
    else if (option == 2)
    {
        trains();
    }
    else if (option == 3)
    {
        printf("\n\tThanks for visiting");
    }
    else
    {
        printf("invalid input");
    }
}
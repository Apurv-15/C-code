#include <stdio.h>
#include <string.h>

char source[20], des[20], train[40];
char station[40], cla[40];
int time1, time2, a[55];


struct Passenger
{
    int phoneNo[10];
    int Age;
    char Name[20];
    char Gender[10];
};
void main()
{
    int i, j, a1, a2, b, c, x = 0, d, e, r;
    char o;
    int ch;
    char start[50], end[50];
    struct Passenger t;
    printf("Enter Name:");
    scanf("%c", &t.Name[20]);
    gets(t.Name);
    printf("\nEnter Age:");
    scanf("%d", &t.Age);
    printf("Enter Gender:");
    scanf("%c", &t.Gender[10]);
    gets(t.Gender);
    printf("\nEnter phone number:");
    scanf("%d", &t.phoneNo[10]);
    printf("\nEnter start location:");
    scanf("%c", &start[50]);
    gets(start);
    printf("\nEnter end location:");
    scanf("%c", &end[50]);
    gets(end);

    printf("-----[ Trains ]-----\n");
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
    printf("Enter your choice:\n");
    scanf("%d", &ch);
    do
    {
        switch (i)
        {
        case 1:

            strcpy(train, "Rajdhani Express");
            strcpy(station, "Sealdah Station");
            time1 = 10;
            time2 = 00;
            a1 = 2099;
            a2 = 1560;

            // Calling cal() function
            // with the three argument
            // and return value
            d = cal(a1, a2, j);
            printf("Total Bill Amount:%d\n", d);

            break;

        case 2:

            strcpy(train, "Satabdi Express");
            strcpy(station, "Howrah Station");
            time1 = 05;
            time2 = 00;
            a1 = 1801;
            a2 = 981;

            // Calling cal() function with
            // three argument & return value
            d = cal(a1, a2, j);
            printf("Total Bill Amount:%d\n", d);

            break;
        case 3:

            strcpy(train, "Humsafar Express");
            strcpy(station, "Kolkata Chitpur Express");
            time1 = 11;
            time2 = 00;
            a1 = 2199;
            a2 = 1780;

            // Calling cal() function with
            // three argument & return value
            d = cal(a1, a2, j);
            printf("Total Bill Amount: %d\n", d);

            break;

        case 4:

            strcpy(train, "Garib-Rath Express");
            strcpy(station, "Sealdah Station");
            time1 = 05;
            time2 = 00;
            a1 = 1759;
            a2 = 1200;

            // Calling cal() function with
            // three argument & return value
            d = cal(a1, a2, j);
            printf("Total Bill Amount: %d\n", d);

            break;

        case 5:

            strcpy(train, "Duronto Express");
            strcpy(station, "Santraganchi Station");
            time1 = 07;
            time2 = 00;
            a1 = 2205;
            a2 = 1905;

            // Calling cal() function with
            // three argument & return value
            d = cal(a1, a2, j);
            printf("Total Bill Amount: %d\n", d);

            break;
        default:
            printf("Enter Correct choice.....\n");
            x = 1;
            break;
        }

        while (x)
        {

            printf("Now Book Your Seats......\n");

            // Calling seat() function with number
            // of passenger
            seat(j);

            // Calling bill() function with
            // the number of passenger
            // and amount argument
            bill(d, j);
        }
    }
    void details(int k)
{
	int i, a;
	char val[20], gen[6];
	for (i = 1; i <= k; i++) {
		printf("Enter The %dth Passenger Name: ", i);
		fflush(stdin);
		gets(val);
		printf("Enter The %dth Passenger Gender: ", i);
		fflush(stdin);
		gets(gen);
		printf("Enter The %dth Passenger Age: ", i);
		fflush(stdin);
		scanf("%d", &a);

		// Calling add_node() function
		add_node(val, gen, a);
	}
}

// Function to add details in node
// for each passengers
void add_node(char lol[20], char der[6], int b)
{
	Node *newptr = NULL, *ptr;
	newptr = (Node*)malloc(sizeof(Node));
	strcpy(newptr->name, lol);
	strcpy(newptr->gen, der);
	newptr->age = b;
	newptr->link = NULL;
	if (start == NULL)
		start = newptr;
	else {
		ptr = start;
		while (ptr->link != NULL)
			ptr = ptr->link;
		ptr->link = newptr;
	}
}

// Function for choosing seats
int seat(int p)
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
	for (i = 0; i < p; i++)
		scanf("%d", &a[i]);
}

// Function for printing receipt
void bill(int y, int j)
{
	int i;
	Node* ptr = start;
	for (i = 1; i <= j; i++) {
		printf("\t\t\%dst Passenger Name: ", i);
		puts(ptr->name);
		printf("\t\t%dst Passenger Gender: ", i);
		puts(ptr->gen);
		printf("\t\t%dst Passenger Age: %d\n\n", i,
			ptr->age);
		ptr = ptr->link;
	}
	printf("\t\tSource Place: ");
	puts(source);
	printf("\t\tDestination Place: ");
	puts(des);
	printf("\t\tThe Boarding Station: ");
	puts(station);
	printf("\t\tTrain Is: ");
	puts(train);
	printf("\t\tAllocated Class: ");
	puts(cla);
	printf("\t\tBoarding Time: %d:%d\n", time1, time2);
	printf("\t\tTotal Bill Amount: %d\n", y);
	printf("\t\tAllocated Seats Are: \n");
	for (i = 0; i < j; i++) {
		printf("\t\t%d ", a[i]);
	}
	printf("\n");
	printf("\t\t\t\tThank You......\n");
}

    // printf("\n\t\tTICKET\n");
    // printf("___________________________\n");
    // printf("| Name of Passenger:%s \n", t.Name);
    // printf("| Age Of passenger:%d |\n", t.Age);
    // printf("| Gender:%s |\n", t.Gender);
    // printf("| PhoneNo:%d |\n", t.phoneNo);

    // printf("| From:%s|\n", start);
    // printf("| To:%s |\n", end);
    // printf("\n");
    // printf("Your Ticket Booking was successfull... \nYour total fare is Rs.500.\nHAPPY JOURNEY!!");
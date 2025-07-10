/*
    Author: Tired-Specter
    Date: 28/03/2023
    Programme Description: C programme that prints Flight number, flight date, surname, firstname, seat number and destination
    using structure templates and two separate functions
    Function enter allows the user to enter their passenger information into the terminal window 
    Function Display displays the users information to the screen 
*/

#include <stdio.h>
#include <string.h>


//symbolic names
#define LENGTH 11
#define S_LENGTH 21
#define DEST 32


//structure templates

//structure template for the flight date
struct date
{
    int day;
    int month;
    int year;
};

//structure template for flight number
struct num
{
    char let;//char for letters of flight number
    int numb;//int for numbers of flight number
};

//structure template for seat number
struct seat
{
    int leng;
    char lets;
};

//structure template for flight information
struct shamrock
{
    struct num flight_number;
    struct date flight_date;
    char surname[S_LENGTH];
    char first_name[LENGTH];
    struct seat seat_number;
    char destination[DEST];
};
//end of structure templates

//function signatures
void enter(struct shamrock*);
void display(struct shamrock);
//end of function signatures

//beginning of main function
int main()
{
    struct shamrock passenger;
    
    //refers to function enter by reference using dereference operator
    enter(& passenger);

    //refers to function display by value
    display(passenger);

    return 0;
}
//end of main function

//function that reads in passenger information and places them into corresponding structure
void enter(struct shamrock *ptr)
{
    printf("\nPassenger 1\n");

    printf("\n Enter Name:\n");
    fgets(ptr ->first_name, LENGTH - 1, stdin);

    //clears input buffer
    while(getchar() != '\n');

    printf("\nEnter Surname:\n");
    //fgets reads string from input
    fgets(ptr -> surname, S_LENGTH - 1, stdin);

    while(getchar() != '\n');

    printf("\nEnter Destination:\n");
    fgets(ptr -> destination, DEST - 1, stdin);

    while(getchar() != '\n');

    printf("\nEnter Date:\n");
    printf("\nDate Format: DD/MM/YYYY\n");

    scanf("%d", & ptr -> flight_date.day);
    scanf("%d", & ptr -> flight_date.month);
    scanf("%d", & ptr -> flight_date.year);

    while(getchar() != '\n');

    printf("\nEnter Flight Number\n");
    printf("\nFormat: 2 Letters, 3 Numbers\n");

    scanf("%c", & ptr -> flight_number.let);
    scanf("%d", & ptr -> flight_number.numb);

    while(getchar() != '\n');

    printf("\nEnter Seat Number\n");
    printf("\nFormat: Number, Letter\n");

    scanf("%d", & ptr -> seat_number.leng);
    scanf("%c", & ptr -> seat_number.lets);

    printf("\nPassenger 2\n");
    
    printf("\n Enter Name:\n");
    fgets(ptr -> first_name, LENGTH - 1, stdin);

    while(getchar() != '\n');

    printf("\nEnter Surname:\n");
    fgets(ptr -> surname, S_LENGTH - 1, stdin);

    while(getchar() != '\n');

    printf("\nEnter Destination:\n");
    fgets(ptr -> destination, DEST - 1, stdin);

    while(getchar() != '\n');

    printf("\nEnter Date:\n");
    printf("\nDate Format: DD/MM/YYYY\n");

    scanf("%d", & ptr -> flight_date.day);
    scanf("%d", & ptr -> flight_date.month);
    scanf("%d", & ptr -> flight_date.year);

    while(getchar() != '\n');

    printf("\nEnter Flight Number\n");
    printf("\nFormat: 2 Letters, 3 Numbers\n");

    scanf("%c", & ptr -> flight_number.let);
    scanf("%d", & ptr -> flight_number.numb);

    while(getchar() != '\n');

    printf("\nEnter Seat Number\n");
    printf("\nFormat: Number, Letter\n");

    scanf("%d", & ptr -> seat_number.leng);
    scanf("%c", & ptr -> seat_number.lets);
}//end of function


/*Function display is used to display contents of function structure shamrock*/
void display(struct shamrock pass)
{
    printf("\nFlight Number: ");
    printf("%c", pass.flight_number.let);
    printf("%d", pass.flight_number.numb);

    printf("\n Flight Date: ");
    printf("%d", pass.flight_date.day);
    printf("%d", pass.flight_date.month);
    printf("%d", pass.flight_date.year);


    printf("\n Surname: ");
    printf("%s", pass.surname);

    printf("\n First Name: ");
    printf("%s", pass.first_name);

    printf("\n Seat Number");
    printf("%d", pass.seat_number.leng);
    printf("%c", pass.seat_number.lets);


    printf("\n Destination: ");
    printf("%s", pass.destination);
}//end of function

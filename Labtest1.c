//Tired-Specter LabTest1 Programming 2022
#include <stdio.h>

int main()
{
    //int is option chosen at beginning of program
    int option;
    //seq is the number of terms in sequency that user wants to display
    int seq;
    //int i is variable for FOR Loop	
    int i;

//first two terms of fibonacci sequence are initialiseed as needed for FOR Loop
    int term = 0, term2 = 1;
    //int will be next term in sequence based off of user choice for how many terms
    int next = term + term2;
//do while keeps opening menu until option two is selected
do
{

    printf("\n Welcome To the Fibonacci Series Program\n Please Choose ONE of Two Options:\n 1.Enter the number of terms to display in the sequence. \n 2. End Program. \n");

    scanf("%1d", &option);

    //switch statement was chosen so that two options could be initialised
    switch(option)
    {
    case 1:
        printf("\n Please Choose how many terms of the fibonacci sequence you would like to display \n");

        scanf("%1d", &seq);

        printf("The Fibonacci Sequence is %d,%d,",term,term2);

        //for loop that registers the number entered and calculates the fibonacci sequence accordingly
            for ( i = 3; i <= seq; ++i)
            {
                printf("%d,",next);

                term = term2;
                term2 = next;
                next = term + term2;
            }

        break;

    }
//end of do while loop
} while (option !=2);

    return 0;
}

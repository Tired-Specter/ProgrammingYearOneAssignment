/*
Lab Test 2
Programme to convert currency from the choice of two options
*/

#include <stdio.h>

#define SIZE 3 //symbolic name for array 
#define USD 1.10
#define EUR 0.90

float change_to_Euro(); // function prototype for converting dollars to euro
float change_to_Dollar(); // function prototype for converting euro to dollars

int main(void) //main function
{
    float values [SIZE]; //array defined
    int choice; //menu choice
    float convert; //variable for calling function

    printf("\n Please Choose and Option \n\n 1. Euro\n 2. Dollar\n 3. Exit Program\n"); //menu options
    scanf("%d", &choice);

    while (getchar() != '\n');//buffer

do{//begin DO WHILE
        if (choice == 1) // Converts Euros to Dollars if choice selected
        {
            printf("\n Please enter three integer values\n", SIZE);

                for(int i = 0; i < SIZE; i++) //beginning of FOR Loop
                {

                    scanf("%f", & values [i]);

                }

                while (getchar() != '\n');//buffer

                convert = change_to_Euro(values);//change to euro function called and initialised as convert

                printf("\nThe Average of these numbers when converted is %.2f" , convert);
                break;
        }
        else if (choice == 2) //converts Euros to Dollars if choice selected
        {
            printf("\n Please enter three integer values\n", SIZE);//print function

                for(int i = 0; i < SIZE; i++) //beginning of FOR Loop
                {

                    scanf("%f", & values [i]);

                }//end of FOR loop

                while (getchar() != '\n');//buffer

                convert = change_to_Dollar(values);//change to dollar function called and initialised as convert

                printf("\n\nThe Average of these numbers when converted is %.2f\n" , convert);
                break;
        }
}while (choice != 3);//end DO WHILE

        printf("\nGoodbye\n");

        return 0;
    }


float change_to_Euro(float my_values[]) //converts US Dollars to Euro
{
    float euro; //variables defined
    int sum = 0;
    float average = 0;

    for (int i = 0; i < SIZE; i++)//beginning of FOR Loop
    {

        euro = my_values[i] * EUR;

        printf("\n%.2f in Euros is %.2f in Dollars\n\n", my_values[i], euro );

    }//end of FOR Loop

    for (int i = 0; i < my_values; i++)//For Loop to figure out the average of the numbers / cant quite get it to show up in main though
    {

        sum = sum + my_values[i];

    }
    
    average = (float)sum / 3;
    
    return euro; 
}//end function

float change_to_Dollar(float these_values[]) //euros to dollars
{
    float dollar;//variables
    int sum = 0;
    float average = 0;

    for (int i = 0; i < SIZE; i++)//beginning of FOR Loop
    {

        dollar = these_values[i] * USD;

        printf("\n%.2f in dollars is %.2f in euro\n\n", these_values[i] , dollar );

    }//end FOR Loop

    for (int i = 0; i < these_values; i++)//same as in previous function
    {

        sum = sum + these_values[i];

    }
    
    average = (float)sum / 3;

    return dollar;
}//end function

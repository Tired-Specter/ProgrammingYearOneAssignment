/*Assignment 1 Lauren Mayers C22712435 Programming Assignment for ATM Menu 
Programme creates menu in which user can input a choice of four options related to a four integer PIN number
Option one allows the user to ender a PIN number that has been initialised by 1234
option Two allows for the change of the pin and subsequent verification
option Three will tell the user how many times they have incorrectly or correctly entered the PIN as the programme was running
Option four exits the program.
Author: Lauren Mayers C22712435
*/

#include <stdio.h>
#include <unistd.h>//used for time delay

int main()
{
    //variable definition 
    int pass1 = 1;
    int pass2 = 2;
    int pass3 = 3;
    int pass4 = 4;

    //pin verification for option 2
    int newpass1;
    int newpass2;
    int newpass3;
    int newpass4;
    int newpassver1;
    int newpassver2;
    int newpassver3;
    int newpassver4;

    //end verification variables
    int option;//option from user stored in option variable
    int Success = 0;//int will count how many times pin entry is successful 
    int Fail = 0;// int will count how many times pin entry is failed

//beginning of do while loop
do
    {
        //time delay for menu so as not to clutter the screen for user
        sleep(1);

        printf("\n****Menu**** \n Option 1: Enter PIN \n Option 2: Change PIN \n Option 3: Pin Entries\n Option 4: Exit \n");

        //scanf to verify option chosen by user, also prevents char from being chosen alongside float
        scanf("%1d", &option);

        //while to stop char from being entered
        while (getchar() != '\n');
        
        
        //beginning of switch case that determines what happens when each option is chosen
        switch (option)
        {
            case 1:
            {
                //original pin entered
                printf("\nPlease Enter Your Pin\n");

                scanf("%1d %1d %1d %1d", &pass1, &pass2, &pass3, &pass4);

                while (getchar() != '\n');

                //pin verification if statement
                if (pass1 == 1 && pass2 == 2 && pass3 == 3 && pass4 ==4)
                {
                    //print statement if verification is passed
                    printf("\nThat Is The Correct Pin\n");

                    Success++;
                }
                else if (pass1 != 1 && pass2 != 2 && pass3 != 3 && pass4 != 4)
                {
                    //print statement 
                    printf("\nThat Is Not The Correct Pin\n");

                    Fail++;
                }
                //end of pin verification if statement
                break;
            }

        //new pin entered and verification process
            case 2:
            {   
                //printf asking for pin and scanf that reads pin x2 to ensure pin is the same
                printf("\nPlease Enter Your New 4 Digit Pin \n");

                scanf("%1d %1d %1d %1d", &newpass1, &newpass2, &newpass3, &newpass4);

                while (getchar() != '\n');

                printf("\n You have entered a new pin \n Please enter the new pin again to verify\n");

                scanf("%1d %1d %1d %1d", &newpassver1, &newpassver2, &newpassver3, &newpassver4);

                while (getchar() != '\n');

                //if else statemnt verifys if the new pin entered has been entered correctly twice
                if (newpass1 == newpassver1 && newpass2 == newpassver2 && newpass3 == newpassver3 && newpass4 == newpassver4)
                {   
                    //new pin stored 
                    newpass1 = newpassver1;

                    newpass2 = newpassver2;
                    
                    newpass3 = newpassver3;
                    
                    newpass4 = newpassver4;

                    //new pin verification confirmed
                    printf("\n ***Your new pin Has been verified***\n");

                }
                else if (newpass1 != newpassver1 && newpass2 != newpassver2 && newpass3 != newpassver3 && newpass4 != newpassver4)
                {
                    printf("\n Verification Failed New Pin Not Set \n ***Pin Will Remain The Same***\n"); 
                }
                break;
            }

            case 3:
                {
                    //printf statement to tell user how many times they've successfully input the pin
                    printf("\n You Have Entered Your Pin correctly %1d times\n ", Success );

                    //printf statement to tell user how many times they've unsuccessfully input the pin
                    printf("\n You Have Entered Your Pin incorrectly %1d times\n", Fail);

                    break;
                }
            case 4:
                {
                    sleep(2);
                    printf("\nThank You For using this system \n ****END**** \n");

                    break;
                }
            default:
                {
                    printf("\nPlease pick an option between 1 to 4\n");

                    break;
                }
        }
        //end of switch case statement
    }while (option != 4);
        return 0;
}
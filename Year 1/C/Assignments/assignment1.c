/******************************************************************************

This program will implement some basic functions of an ATM machine.
It will allow a user to:
1.Enter their PIN and verify that it is correct
2.Change their PIN, ensuring they type it twice to verify.
3.Show the number of correct and incorrect PIN verifications in option 1.
4.End the program.

Author: Barry Date:24/10/2018 Compiler: OnlineGDB
*******************************************************************************/
#include <stdio.h>

int main()
{

//decalre variables
int end = 0;
int selection;
//default pin is 1234
int pin = 1234;
int verify;
int correct = 0;
int incorrect = 0;
int change;
int changeVerify;
int endChange = 0;

//Starting message
printf("Welcome to the Bank of [redacted]!\n");

//Start while for looping menu
while(end == 0)
{
    printf("\nPlease select one of the following options\n");
    printf("1.Enter your PIN to verify\n");
    printf("2.Change your PIN\n");
    printf("3.Display sucessful and unsucessful PIN verification attempts\n");
    printf("4.Exit the program\n");
    scanf("%d",&selection);
    
    //Switch statement to act as menu selection tool
    switch (selection)
    { 
        //Case 1 will ask the user to enter their PIN and verify that it is correct
        case 1:
        {   
            printf("\nPlease enter your PIN to verify\n");
            scanf("%d",&verify);
            
            //If statement will check if the PIN entered is correct
            if(verify == pin)
            {
                printf("\nYou have entered your PIN correctly\n");
                correct++;
            }
            else
            {
                printf("\nYou have entered your PIN incorrectly\n");
                incorrect++;
            }//end if else
            
            break;
        }//end case 1
        
        //Case 2 will ask the user to change their PIN, it will then 
        case 2:
        {
            //While to ensure that the PIN is entered the same twice
            while(endChange == 0)
            {
                printf("\nPlease enter your new PIN, only the first four digits will be accepted\n");
                scanf("%4d",&change);
                printf("\nPlease verify your new PIN by entering it again\n");
                scanf("%4d",&changeVerify);
                
                //If statement will check that the second input matches the first to verify the PIN was set correctly
                if(change == changeVerify)
                {
                    printf("\nYour new PIN has now been applied\n");
                    pin = change;
                    endChange++;
                }
                else
                {
                    printf("\nYou have entered your new PIN incorrectly, try setting it again\n");
                }//end if else
                
            }//end while

            endChange = 0;
            break;
        }//end case2
        
        //Case 3 will display the number of times the PIN was entered correctly and incorrectly
        case 3:
        {
            printf("\nYour PIN was entered correctly %d times\n",correct);
            printf("Your PIN was entered incorrectly %d times\n",incorrect);
            
            break;
        }//end case3
        
        
        //Case 4 will end the program
        case 4:
        {
            printf("\nThank you for using Bank of [redacted]");
            end++;
            break;
        }//end case4
        default:
        {
            printf("\nError in menu selection, try again\n");
        }//end default
    }//end switch
}//end while


}//end main


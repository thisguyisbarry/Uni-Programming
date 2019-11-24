/*

This rogram will print out a menu and depending on what the person (user) selects it will:
1. Ask the user to enter a value for the radius of a sphere and alculate the area.
2. Ask the user to enter a value for the length of a side of a cube and calculate the area.
3. End program

Author: Barry Date: 22/10/2018 Student Number: 18732339
*/
#include <stdio.h>

int main()
{
    //Decalre variables
    int select = 0;
    float input = 0;
    float pi = 3.14;
    float volume = 0;
    int end = 0;
    
    printf("Welcome to the Shape Volume Calculator\n\n");
    
    while(end==0)
    {
    //Print out menu and scan in their selection 1,2,3 from the options given
    printf("Enter your selection:\n1. Enter a value for the radius of a sphere (assume in metres).\n2. Enter a value for the length of a side of a cube (assume each side has equallength in metres).\n3. End program\n");
    scanf("%d",&select);
    
    //Switch statement to act as menu selection tool
    switch (select)
    {   //Case 1 will find the area of a sphere given a radius
        case 1:
        {   
            //Ask user input for radius
            printf("\nPlease enter a value for the radius\n");
            scanf("%f.2",&input);
            
            // Volume of a sphere = 4*pi*radius*radius*radius/3
            volume = 4*pi*input*input*input/3;
            
            //Print this value to the user
            printf("\nThe volume of the sphere to two decimal places is %f\n",volume);
            
            break;
        }//end case 1
        //Case 2 will calculate the volume of a cube
        case 2:
        {
            //Ask user for input for a side of cube   
            printf("\nPlease enter a value for one side of the cube\n");
            scanf("%f.2",&input);
            
            //Volume of a cube = a*a*a where a is any side
            volume = input*input*input;
            
            //Print value to user
            printf("\nThe volume of the cube is %f\n",volume);
            break;
        }//end case2
        //Case 3 will end the program
        case 3:
        {
            printf("\nWe will now end the program");
            end++;
            break;
        }//end case3
        default:
        {
            printf("\nError in menu selection, try again\n");
        }//end default
    }//end switch
    }//end while
    
    //Holds executable window open
    getchar();
    
    return 0;
}



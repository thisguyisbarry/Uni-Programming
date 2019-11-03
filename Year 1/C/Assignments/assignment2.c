/*
This program will present the user with a menu, upon selection the user can:
1. Enter a code of their choice
2. Encrypt their chosen code and verify it against the access code
3. Decrypt their chosen code
4. Check how many successful and unsuccessful verification attempts have been made in this instance of the program
5. Terminate the program.

Author: Barry Date:02/03/2019 Compiler: repl.it
*/
#include <stdio.h>

//Global varaibles
#define CODESIZE 4

//Prototypes
void codeEntry(int*);
void codeEncrypter(int*);
void codeDecrypter(int*);
void levelOfSuccess(int, int);

int main(void) 
{
//Declare varaibles
 int end = 0; 
 int selection;
//Deault encrypted code is 4523 (1234 encrypted)
 int access_code[CODESIZE] = {4,5,2,3};
 int userCode[CODESIZE];
 int i;
 int verify;
 int successful = 0;
 int unsuccessful = 0;
 int codeEntered = 0;
 int codeEncrypted = 0;

//Continue to execute menu until user wishes to exit
 while (end == 0)
 {
   //print out the menu options
   printf("Please select one of the following options by entering the corresponding number\n");
   printf("1. Enter your code\n");
   printf("2. Encrypt your code to verify\n");
   printf("3. Decrypt an encrypted code\n");
   printf("4. Display the number of successful and unsuccessful verifications\n");
   printf("5. Terminate the program \n");
   scanf("%d", &selection);

   switch (selection)
   {

     //Calls function to ask user for code and input it into an array
     case 1:
     {
      codeEntry(userCode);

      //Code is unencrypted, so set check variable to 0/Unencrypted
      codeEncrypted = 0;
      //Increment value to show a code has been entered, relevant for encryption and verifying
      codeEntered++;
      break;
     }//end case 1

     //Calls function to encrypt code and, verifies it matches access code
     case 2:
     {
      if(codeEntered>0&&codeEncrypted<1)
      {
        codeEncrypter(userCode);

        //Verify codes are now equal
        verify = 0;
        for(i = 0; i<CODESIZE; i++)
        {
          //if the codes are equal. increment verify variable
          if(userCode[i] == access_code[i])
          {
           verify++;
          }//end if
        }//end for
        
        //If all user code numbers are equal, verify will be equal to 4
        if(verify == 4)
        {
          printf("Successful verification\n");
          successful++;
        }//end if

        //If verify is not 4, the verification is unsuccessful
        else
        {
          printf("Unsuccessful verification\n");
          unsuccessful++;
        }//end else

        //Change encrypted state to 1/Encrypted
        codeEncrypted++;
      }//end if

      else
      {
        printf("Please enter a code before continuing\n");
      }
      break;
     }//end case 2

     //Calls function to decrypt the code
     case 3:
     {
       //Check if code has been encrypted
       if(codeEncrypted == 1)
       {
         codeDecrypter(userCode);
         printf("Your code has now been decrypted\n");
         //Change encrypted state to 0/Not encrypted
         codeEncrypted--;
       }//end if
       //If code hasn't been encrypted, print error message
       else
       {
         printf("Please encrypt your code and try again\n");
       }//end else

       break;
     }//end case 3
    
    //Calls function to print out successful and unsuccessful verification attempts
     case 4:
     {
       levelOfSuccess(successful, unsuccessful);
       break;
     }//end case 4
    
    //Terminates the program
     case 5:
     {
       end++;
       printf("\nThe program will now terminate. Goodbye!\n");
       break;
     }//end case 5

    //If user selects unintended/out of bounds option. 
     default:
     {
       printf("\nError in menu selection, please try again\n");
     }//end default


   }//end switch

 }//end while

}//end main

//Method to ask user to input code
void codeEntry(int *ptr)
{
  int i;
  printf("Please enter your code\n");

  //Use for loop to enter integers into array
  for(i = 0; i<CODESIZE; i++)
  {
    scanf("%1d", &*ptr+i);  
  }//end for

  printf("Code has now been set.\n\n");
}//end codeEntry

//Swap 1st with 3rd number, 2nd with 4th, add one to each, if number is 10 set to 0
void codeEncrypter(int *ptr)
{
  int i;
  int holder;

//Replace the 1st with 3rd value
  holder = *(ptr);
  *(ptr) = *(ptr+2);
  *(ptr+2) = holder;

//Replace the 2nd with the 4th value
  holder = *(ptr+1);
  *(ptr+1) = *(ptr+3);
  *(ptr+3) = holder;

  //Use loop to add 1 to each element 
  for(i = 0; i<CODESIZE; i++)
  {
    *(ptr+i) = (*(ptr+i))+1;
    //Check if value is now 10, if so set to 0. 
    if(*(ptr+i) == 10)
    {
      *(ptr+i) = 0;
    }//end if
  }//end for

}//end codeEncrypter

//Swaps back 1st with 3rd number, 2nd with 4th, reduce each number by 1, if number is -1 set to 9
void codeDecrypter(int *ptr)
{
  int holder;
  int i;
//Replace the 1st with 3rd value
  holder = *(ptr);
  *(ptr) = *(ptr+2);
  *(ptr+2) = holder;

//Replace the 2nd with the 4th value
  holder = *(ptr+1);
  *(ptr+1) = *(ptr+3);
  *(ptr+3) = holder;

  //Use loop to subtract 1 from each element 
  for(i = 0; i<CODESIZE; i++)
  {
    *(ptr+i) = (*(ptr+i))-1;
    //Check if value is now 10, if so set to 0. 
    if(*(ptr+i) == -1)
    {
      *(ptr+i) = 9;
    }//end if
  }//end for

}//end codeDecrypter

//Prints the number of time verification of the code has been successful or unsuccessful
void levelOfSuccess(printSuccessful,printUnsuccessful)
{
  printf("The number of successful verifications is: %d\n", printSuccessful);
  printf("The number of unsuccessful verifications is: %d\n", printUnsuccessful);
}//end levelOfSuccess

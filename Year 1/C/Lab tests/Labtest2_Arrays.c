/******************************************************************************
This program will initialise a 5*5 2d array.
It will then fill the array with 5s.
After this it will:
1.Fill the diagonals of the array with 0s.
2.Fill the middle row of the array with 1s.
3.Set the "corners" of the array with 2s.

Author: Barry Date: 03/12/2018 Compiler: OnlineGDB
*******************************************************************************/
#include <stdio.h>
#define ROW 5
#define COLUMN 5

int main()
{
    //Allocate variables
    int array[ROW][COLUMN];
    int set = 5;
    int i;
    int j;
    int zero = 0;
    int one = 0;
    int two = 0;
    int five = 0;
    int countup = 0;
    int countdown = COLUMN-1;
    
    //Initialise the array for all values to be 5
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COLUMN;j++)
        {
            array[i][j]=5;
        }
    }
    
    //Set the diagonals of the array to be 0
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COLUMN;j++)
        {
            if(j==countup)
            {
                array[i][j] = 0;
            }
            else if(j==countdown)
            {
                array[i][j] = 0;
            }
        }
        countup++;
        countdown--;
    }
    
    //Set all elements of the middle row and column equal to 1.
    
    
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COLUMN;j++)
        {
          if(j==3)
          {
              array[i][j] = 1;
          }
          else if(i==3)
          {
              array[i][j] = 1;
          }
        }
    }
    
    //Set the "corners" of the array equal to 2
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COLUMN;j++)
        {
            if(i==0||i==ROW-1)
            {
                if(j==0||j==COLUMN-1)
                {
                    array[i][j] = 2;
                }
            }
        }
    }
    
    //Count up the number of 0, 1, 2 or 5s. 
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COLUMN;j++)
        {
            if(array[i][j]==0)
            {
                zero++;
            }
            else if(array[i][j]==1)
            {
                one++;
            }
            else if(array[i][j]==2)
            {
                two++;
            }
            else if(array[i][j]==5)
            {
                five++;
            }
        }
    }
    
    //Print the number of 0, 1, 2 or 5.
    
    printf("There are %d zeros in the array\n",zero);
    printf("There are %d ones in the array\n",one);
    printf("There are %d twos in the array\n",two);
    printf("There are %d fives in the array \n",five);
    
    getchar(); //holds executable window open

    return 0;
}//end main()


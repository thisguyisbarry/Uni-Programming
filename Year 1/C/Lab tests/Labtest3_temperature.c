/******************************************************************************
This program will;
1. Take in 5 temperature values in celsius. 
2. Display what each value is in Fahrenheit.
3. Calculate the average temperature in celsius.
4. Display the celsius reading in kelvin.
5. Display the average value in kelvin.

Author: Barry Date: 21/02/2019 Compiler: OnlineGDB
*******************************************************************************/
#include <stdio.h>

//Global Variables
#define NUMBERTEMPS 5  

//Prototypes
float convert_temp(float[]);
float in_Kelvin(float[],float);


int main()
{
    float celsiusReading[NUMBERTEMPS];
    int i;
    float returnedAverageCelsius; 
    float averageKelvin;
    
    //Get the user to enter their celsius readings.
    for(i = 0; i<NUMBERTEMPS; i++)
    {
        printf("Please enter a celsius reading\n");
        scanf("%f",&celsiusReading[i]);
    }
    
    //Call function convert_temp to convert and get the average of the celsius readings. 
    returnedAverageCelsius = convert_temp(celsiusReading);
    
    //Print average celsius. 
    printf("Average celsius: %f\n", returnedAverageCelsius);
    
    //Pass array and average celsius to in_Kelvin to be converted
    averageKelvin = in_Kelvin(celsiusReading,returnedAverageCelsius);
    
    //Print the average converted to Kelvin
    printf("Average in Kelvin: %f\n", averageKelvin);
    
    //Holds executable window open
    getchar();

}

//Converts celsius array to fahrenheit and finds+returns average value in celsius.
float convert_temp(float celsiusToConvert[NUMBERTEMPS])
{
    int i;
    float fahrenheitReading[NUMBERTEMPS];
    float sum = 0;
    float averageCelsius;
    float averageKelvin;
    
    
    //Convert the celsius temperature to fahrenheit. 
    for(i=0; i<NUMBERTEMPS; i++)
    {
        fahrenheitReading[i] = (((celsiusToConvert[i]*9)/5)+32);
    }
    
    //Print the value in celius and it's corresponding value in fahrenheit
    for(i=0; i<NUMBERTEMPS; i++)
    {
        printf("Ceslius: %f, Fahrenheit: %f\n",celsiusToConvert[i],fahrenheitReading[i]);
    }
    
    //Calculate the average celsius value 
    for(i=0; i<NUMBERTEMPS; i++)
    {
        sum = sum + celsiusToConvert[i];
    }
    averageCelsius = sum/NUMBERTEMPS;
    
    //Pass the now calculated average in celsius back to main()
    return(averageCelsius);
}

//Converts celsius readings into kelvin, returns average celsius value in kelvin
float in_Kelvin(float celsiusToKelvin[],float averageCelsiusToConvert)
{
    float kelvinReading[NUMBERTEMPS];
    int i;
    
    //Converts the array of celsius to kelvin 
    for(i=0; i<NUMBERTEMPS; i++)
    {
        kelvinReading[i] = celsiusToKelvin[i] + 273;
    }
    
    //Convert the average value passed down to kelvin
    averageCelsiusToConvert = averageCelsiusToConvert + 273;
    
    //Pass kelvin average back to main
    return(averageCelsiusToConvert);

}

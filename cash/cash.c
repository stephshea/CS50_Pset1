#include <cs50.h>
#include <stdio.h>
#include <math.h>
float cash = 0.00;
int cents;
int count = 0;
int main(void)
{
    do
    {
        //use float initially to get amount
        cash = get_float("Enter cash: ");
        printf("cash %.2f\n", cash);
    }
    while (cash < 0);
    //convcerts cash float to an int
    cents = round(cash * 100.00);
    {
    //interates thru each coin value from highest to lowest
        while (cents >= 25)
        {
            //subtract 25 from cents until less than 25 remains
            cents = cents - 25;
            //add 1 to count for each 25 subtraction
            count = count + 1;
        }
        //repeats logic for 25 for each lesser increment
        while (cents < 25 && cents >= 10)
        {
            cents = cents - 10;
            count = count + 1;
        }
        while (cents < 10 && cents >= 5)
        {
            cents = cents - 5;
            count = count + 1;
        }
        while (cents < 5 && cents >= 1)
        {
            cents = cents - 1;
            count = count + 1;
        }
    }
    //returns least amount of coins needed
    printf("number of coins %i\n", count);
}
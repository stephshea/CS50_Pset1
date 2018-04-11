#include <cs50.h>
#include <stdio.h>
#include <math.h>
float cash = 0.00; //use float initially when get amount
int cents; //variable for conversion of cash float to int
int count = 0; //track number of coins needed
int main(void)

{
    do
    {
        //promt user for amount
        cash = get_float("Enter cash: ");
        printf("cash %.2f\n", cash);
    }

    while (cash < 0);

    //multiples cash float by 100 to convert to cents and converts cash float to an int
    cents = round(cash * 100.00);
    {
    //interates thru each coin value from highest to lowest
        while (cents >= 25)
        {
            //subtract 25 from cents until less than 25 remains
            cents = cents - 25;
            //add 1 to count for each 25 subtraction
            count ++;
        }
        //repeats logic for 25 for each lesser increment
        while (cents >= 10)
        {
            cents = cents - 10;
            count ++;
        }
        while (cents >= 5)
        {
            cents = cents - 5;
            count ++;
        }
        while (cents >= 1)
        {
            cents = cents - 1;
            count ++;
        }
    }
    //returns least amount of coins needed
    printf("number of coins %i\n", count);
}
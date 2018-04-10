#include <cs50.h>
#include <stdio.h>
#include <math.h>
float cash = 0.00;
int cents;  // **** pr-jb instantiates the cents variable
int count = 0;  //****  pr-jb instantiates a variable used to count the number of coins
int main(void)
{
    do
    {
        cash = get_float("Enter cash: ");  // ****pr-jb prompts user for cash
        printf("cash %.2f\n", cash);
    }
    while (cash < 0);  //****pr-jb consider adding space below for readability
    cents = round(cash * 100.00);  // ****pr-jb multiplying by 100 to remove the cents
    for (int i = 0; i <= cents; i++)  // ****pr-jb There is no need for a for loop in this program
    {
        while (cents >= 25)
        {
            cents = cents - 25;
            count = count + 1;  // *****pr-jb consider incrementing count using count++ for readability
        }
        while (cents < 25 && cents >= 10)  // ****pr-jb don't need the cents < 25 condition as it wouldn't fall through if cents was bigger then 25
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
    printf("number of coins %i\n", count);
    return 0;
}
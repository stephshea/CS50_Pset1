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
        cash = get_float("Enter cash: ");
        printf("cash %.2f\n", cash);
    }
    while (cash < 0);
    cents = round(cash * 100.00);
    for (int i = 0; i <= cents; i++)
    {
        while (cents >= 25)
        {
            cents = cents - 25;
            count = count + 1;
        }
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
    printf("number of coins %i\n", count);
    return 0;
}
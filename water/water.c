#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int minutes;
    do
    {
        //prompt user for minutes
        minutes = get_int("Minutes: ");
    }
    //make sure minutes is a postive integer
    while (minutes < 0);
    //calculate number of bottles based on minutes
    int bottles = (minutes * 192) / 16;
    //print calculated bottles
    printf("Bottles: %i\n", bottles);
}
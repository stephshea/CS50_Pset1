#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int r, h, s, n;
    //getting height of pyramid
    // eprintf("about to prompt for number\n");
    do
    {
        n = get_int("Enter height: ");
    }
    while (n < 0 || n > 23);

    //sets up rows
    for (r = 1; r <= n; r++)
    {
        //prints spaces
        for (s = 1; s < n - r + 1; s++)
        {
            printf(" ");
        }
        //prints #s
        for (h = 0; h < n - s + 1; h++)
        {
            printf("#");
        }
        //adds 2 space gap
        printf("  ");
        //completes hashes
        for (h = 0; h < n - s + 1; h++)
        {
            printf("#");
        }
        //creates new row
        printf("\n");
    }
    return 0;
}
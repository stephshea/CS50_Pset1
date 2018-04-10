#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int r, h, s, n;  // ****pr-jb consider being more descriptive with your variable names
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
        printf("  ");  // ****pr-jb creates a 2 space gap between sides of the pyramid
        //completes hashes
        for (h = 0; h < n - s + 1; h++) // ****pr-jb creates the right hand side of the pyramid
        {
            printf("#");
        }
        //creates new row
        printf("\n");
    }
    return 0;
}
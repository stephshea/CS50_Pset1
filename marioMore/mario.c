#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int row, hash, space, height;
    //getting height of pyramid
    // eprintf("about to prompt for number\n");
    do
    {
        height = get_int("Enter height: ");
    }
    //checks that height input meets parameters
    while (height < 0 || height > 23);

    //sets up rows
    for (row = 1; row <= height; row++)
    {
        //prints spaces
        for (space = 1; space < height - row + 1; space++)
        {
            printf(" ");
        }
        //prints #s
        for (hash = 0; hash < height - space + 1; hash++)
        {
            printf("#");
        }
        //adds 2 space gap
        printf("  ");

        //completes hashes
        for (hash = 0; hash < height - space + 1; hash++)
        {
            printf("#");
        }
        //creates new row
        printf("\n");
    }
    return 0; // Zero indicates success, while any
  // Non-Zero value indicates a failure/error
}
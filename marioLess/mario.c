#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int row, hash, space, height;

    //getting height of pyramid
    // eprintf("about to prompt for number for height\n");
    do
    {
        height = get_int("Enter height: ");
    }
    while (height < 0 || height > 23);

    //sets up rows
    for (row = 1; row <= height; row++)
    {
        //prints spaces in columns
        for (space = 1; space < height - row + 1; space++)
        {
            printf(" ");
        }
        //prints #s in columns
        for (hash = 0; hash < height - space + 2; hash++)
        {
            printf("#");
        }
        //creates new row
        printf("\n");
    }
    return 0; // Zero indicates success, while any
  // Non-Zero value indicates a failure/error
}
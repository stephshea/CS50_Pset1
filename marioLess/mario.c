#include <cs50.h>
#include <stdio.h>  // ****pr-jb consider adding a return between include and int main
int main(void)
{
    int r, h, s, n;
    //getting height of pyramid
    // eprintf("about to prompt for number\n");
    do
    {
        n = get_int("Enter height: ");
    }
    while (n < 0 || n > 23);  // ****pr-jb while condition to check if height is between 0 and 23

    //sets up rows
    for (r = 1; r <= n; r++)  // **** pr-jb consider changing variable names to row, space, hashes(readability)
    {
        //prints spaces
        for (s = 1; s < n - r + 1; s++)
        {
            printf(" ");
        }
        //prints #s
        for (h = 0; h < n - s + 2; h++)
        {
            printf("#");
        }
        //creates new row
        printf("\n");
    }
    return 0;  // ****pr-jb good practice to return 0 when the code worked correctly
}
//     printf("\n");
//     for (int i = 0; i < n; i++)
//     {
//      for (int j = 0; j <= n - i - 1; j++)
//             printf(" ");
//     //print out this many columns
//      for (int j = 0; j < i + 2; j++)
//             printf("#");
//         printf("\n");
//     }
// }
//debug50 ./mario4
#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int r, h, s, n;
    //getting height of pyramid
    eprintf("about to prompt for number\n");
    do
    {
        n = get_int("Enter height: ");
    }
    while (n <= 0 || n > 24);

    //sets up rows
    for (r = 0; r < n; r++)
    {
        //prints spaces
        for (s = 1; s < n - r + 1; s++)
        {
            printf(" ");
        }
        //prints #s
        for (h = 2; h < n + r - 1; h++)
        {
            printf("#");
        }
        //creates new row
        printf("\n");
    }
    return 0;
}

//     printf("\n");
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= n - i - 1; j++)
//             printf(" ");
//     //print out this many columns
//       for (int j = 0; j < i + 2; j++)

//             printf("#");

//         printf("\n");
//     }
// }

//debug50 ./mario4
#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n;

    //getting height of pyramid
    eprintf("about to prompt for number\n");

    do
    {
        n = get_int("Enter height: ");
    }
    while (n <= 0 || n > 24);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
            printf(" ");
    //print out this many columns
       for (int j = 0; j < i+2; j++)
    printf("#");
    printf("\n");
    }
}

//debug50 ./mario4
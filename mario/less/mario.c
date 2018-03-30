#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n;
    do
    {
        n = get_int("Enter a positive number: ");
    }

    while(n <= 0);

    for (int i = 0; i < n; i++)
  {
      printf("#\n");
  }

}
#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n;
    eprintf("about to prompt for number\n");
    do
    {
        n = get_int("Enter a positive number: ");
    }
    while(n <= 0 || n >24);

    //print out this many rows
    for (int i = 0; i < n; i++)
  {
    //print out this many columns
      for (int j = 0; j < n; j++)
      {
       if( j< n){
       printf(" ");
      }
      else {

       printf("#");
}
printf("\n");
  }
}
}

//debug50 ./mario4
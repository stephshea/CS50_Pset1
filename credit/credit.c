#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{

long long c, digit;
int i, sum = 0, mult = 1;
// int a;
//  do
//  {
 c = get_long_long("Credit Card Number: ");
//  }
//  while (c.length < 16);

printf("card number: %lld \n", c);
// temp = c;
for(i = 0; i < c; i++)
{
    digit = c % 10;
    sum  += digit;
    // return sum;

    // for (j = 0; j < c; j++)
    // {
    // digit = c % 10;
    // mult =  digit * 2;
    // }
}

printf("sum %d\n", sum);
printf("mult %d\n", mult);
// while(c > 0)
//     {
//       digit = c % 10;
//       sum = sum * digit;
//       c /=10;
//     }

//     printf("credit card: %lld\n", temp);
//     printf("sum of digits %lld = %lld\n", temp, sum);


// for(int i = 0; i<strlen(c); i++)
// {
// a =* i;
// printf("a, %i", a);
// }
return 0;
}
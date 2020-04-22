// Get the number of digits of an integer

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  	int x = abs(get_int("Number: " ));
	int digits=0;

	do
	{
		digits++;
		x /= 10;
	}while ( x > 0);

   // Print result
   printf("The number is %i digits long\n", digits);
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int nbr;
	srand(time(0));
	nbr = rand() - RAND_MAX / 2;
	if ((nbr%10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",nbr, nbr%10);
	}
	else if ((nbr%10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n",nbr, nbr%10);
	}
	else 
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",nbr, nbr%10);
	}
									
	return (0);
}

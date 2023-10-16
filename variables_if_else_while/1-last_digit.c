#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int lastDigit(int nbr)
{
	return (nbr%10);
}

int main(void)
{
	int nbr,toto;
	srand(time(0));
	nbr = rand() - RAND_MAX / 2;
	toto=lastDigit (nbr);
	if (toto>5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",nbr,toto);
	}
	else if (toto==0)
	{
		printf("Last digit of %d is %d and is 0\n",nbr,toto);
	}
	else 
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",nbr,toto);
	}
									
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: get a random number and print the number 
 * and if it positive, negative, or zero 
 * Return :0
 */
int main (void)
{
	int n;
	srand(time(0));
	n = tand () - RAND-MAX /2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n > o)
		printf("%i is negative\n",n);
	else
		printf("%i is zero\n",n);
	return (0);
}

			e

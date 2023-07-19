#include <stdio.h>
#include "main.h"

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%i is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%i is negative", i);
}

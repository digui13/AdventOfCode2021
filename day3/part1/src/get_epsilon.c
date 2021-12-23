#include "../includes.h"

int	*get_epsilon(int *gamma)
{
	int	inc;
	int	*epsilon;

	inc = 0;
	epsilon = malloc(sizeof(int) * DIGITS);
	if (epsilon == NULL)
		return (NULL);
	while (inc < DIGITS)
	{
		if(*(gamma + inc) == 0)
			*(epsilon + inc) = 1;
		else
			*(epsilon + inc) = 0;
		inc++;
	}
	return (epsilon);
}
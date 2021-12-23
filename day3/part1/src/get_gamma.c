#include "../includes.h"

int	*get_gamma(int zeros[], int ones[])
{
	int	cnt;
	int	*gamma;
	
	cnt = 0;
	gamma = malloc(sizeof(int) * DIGITS);
	if (gamma == NULL)
		return (NULL);
	while(cnt < 12)
	{
		if (*(zeros + cnt) < *(ones + cnt))
			*(gamma + cnt) = 1;
		else
			*(gamma + cnt) = 0;
		cnt++;
	}
	return (gamma);
}
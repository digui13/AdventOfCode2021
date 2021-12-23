#include "../includes.h"

void	inicialize_array(int *array, int qty)
{
	int	inc;

	inc = 0;
	while(inc < qty)
	{
		*(array + inc) = 0;
		inc++;
	}	
}
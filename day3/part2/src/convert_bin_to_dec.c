#include "../includes.h"

int	convert_bin_to_dec(int *bin)
{
	int	decimal;
	int	inc;

	inc = 0;
	decimal = 0;
	while (inc < DIGITS)
	{
		// bit * 2^pos
		decimal += *(bin + ((DIGITS - 1) - inc)) * pow(2, inc); 
		inc++;
	}
	return (decimal);
}
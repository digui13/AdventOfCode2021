/*

Gamma rate:
    
    Most common bit in the corresponding position of all numbers in the diagnostic report.

Epsilon rate:

    Less common bit in the corresponding position of all numbers in the diagnostic report.

*/

#include "includes.h"

int main()
{
	int			*gamma;
	int			*epsilon;
	long long	decimal;	

	gamma = readfile();
	if (gamma == NULL)
		return (1);
	epsilon = get_epsilon(gamma);
	if (epsilon == NULL)
	{
		free(gamma);
		return (1);
	}
	decimal = convert_bin_to_dec(gamma);
	decimal *= convert_bin_to_dec(epsilon);
	printf("%lld\n", decimal);
	return(0);
}
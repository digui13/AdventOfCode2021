
#include "includes.h"

int main()
{
	t_data data;

	inicialize(&data);
	while (data.digit < DIGITS)
		readfile(&data);
	data.c02sr = convert_bin_to_dec(data.c02sr_bin);
	data.ogr = convert_bin_to_dec(data.ogr_bin);
	data.lsr = data.c02sr * data.ogr;
	printf("\n %d c02sr * %d ogr = %lld lsr\n", data.c02sr, data.ogr, data.lsr);
	close_program(&data, 0);
	return(0);
}
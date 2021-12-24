#include "../includes.h"

void	set_bin_values(t_data *data)
{
	if (data->ogr == 0)
	{
		if (data->ogr_ones > data->ogr_zeros)
			*(data->ogr_bin + data->digit) = 1;
		else if (data->ogr_ones < data->ogr_zeros)
			*(data->ogr_bin + data->digit) = 0;
		else if (data->ogr_ones == data->ogr_zeros)
			*(data->ogr_bin + data->digit) = 1;
	}
	if (data->c02sr == 0)
	{
		if (data->c02sr_ones > data->c02sr_zeros)
			*(data->c02sr_bin + data->digit) = 0;
		else if (data->c02sr_ones < data->c02sr_zeros)
			*(data->c02sr_bin + data->digit) = 1;
		else if (data->c02sr_ones == data->c02sr_zeros)
			*(data->c02sr_bin + data->digit) = 0;
	}
}
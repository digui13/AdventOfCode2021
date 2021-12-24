#include "../includes.h"

void	readfile(t_data *data)
{
	int	inc;
	int	available_to_ogr;
	int	available_to_c02sr;

	while (fscanf(data->fp, "%s", data->str_readed) == 1)
	{
		available_to_ogr = 0;
		available_to_c02sr = 0;
		inc = 0;
		while (data->digit > inc)
		{
			if (*(data->ogr_bin + inc) == ((int) (*(data->str_readed + inc) - 48)))
				available_to_ogr++;
			if (*(data->c02sr_bin + inc) == ((int) (*(data->str_readed + inc) - 48)))
				available_to_c02sr++;
			inc++;
		}
		if (*(data->str_readed + data->digit) == '0' && available_to_ogr == data->digit)
			data->ogr_zeros++;
		else if (*(data->str_readed + data->digit) == '1' && available_to_ogr == data->digit)
			data->ogr_ones++;
		if (*(data->str_readed + data->digit) == '0' && available_to_c02sr == data->digit)
			data->c02sr_zeros++;
		else if (*(data->str_readed + data->digit) == '1' && available_to_c02sr == data->digit)
			data->c02sr_ones++;
	}
	if ((data->ogr_zeros == 1 && data->ogr_ones == 0) || (data->ogr_zeros == 0 && data->ogr_ones == 1))
		only_one_number_left_ogr(data);
	if ((data->c02sr_zeros == 1 && data->c02sr_ones == 0) || (data->c02sr_zeros == 0 && data->c02sr_ones == 1))
		only_one_number_left_c02sr(data);
	rewind(data->fp);
	set_bin_values(data);
	data->ogr_ones = 0;
	data->ogr_zeros = 0;
	data->c02sr_ones = 0;
	data->c02sr_zeros = 0;
	data->digit++;
}
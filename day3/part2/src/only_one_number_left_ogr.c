#include "../includes.h"

void	only_one_number_left_ogr(t_data *data)
{
    int inc;
	int	available_to_ogr;

	rewind(data->fp);
	while(fscanf(data->fp, "%s", data->str_readed) == 1)
	{
		available_to_ogr = 0;
		inc = 0;
		while (data->digit > inc)
		{
			if (*(data->ogr_bin + inc) == ((int) (*(data->str_readed + inc) - 48)))
				available_to_ogr++;
			inc++;
		}
		if (available_to_ogr == data->digit)
		{
			inc = 0;
			while (inc < DIGITS)
			{
				*(data->ogr_bin + inc) = *(data->str_readed + inc);
				inc++;
			}
			data->ogr = 1;
			return ;
		}
	}
}
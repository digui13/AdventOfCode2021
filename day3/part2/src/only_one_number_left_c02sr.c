#include "../includes.h"

void	only_one_number_left_c02sr(t_data *data)
{
    int inc;
	int	available_to_c02sr;

	rewind(data->fp);
	while(fscanf(data->fp, "%s", data->str_readed) == 1)
	{
		available_to_c02sr = 0;
		inc = 0;
		while (data->digit > inc)
		{
			if (*(data->c02sr_bin + inc) == ((int) (*(data->str_readed + inc) - 48)))
				available_to_c02sr++;
			inc++;
		}
		if (available_to_c02sr == data->digit)
		{
			inc = 0;
			while (inc < DIGITS)
			{
				*(data->c02sr_bin + inc) = ((int) (*(data->str_readed + inc) - 48));
				inc++;
			}
			data->c02sr = 1;
			return ;
		}
	}
}
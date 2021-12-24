#include "../includes.h"~

void	inicialize(t_data *data)
{
    data->fp = fopen("../input.txt", "r");
	data->str_readed = malloc(sizeof(char) * DIGITS + 1);
	data->c02sr_bin = malloc(sizeof(int) * DIGITS);
	data->ogr_bin = malloc(sizeof(int) * DIGITS);
	if (data->fp == NULL || data->str_readed == NULL || data->c02sr_bin == NULL || data->ogr_bin == NULL)
		close_program(data, 1);
	inicialize_array(data->c02sr_bin, DIGITS);
	inicialize_array(data->ogr_bin, DIGITS);
	data->digit = 0;
	data->c02sr = 0;
	data->lsr = 0;
	data->ogr = 0;
	data->ogr_ones = 0;
	data->ogr_zeros = 0;
	data->c02sr_ones = 0;
	data->c02sr_zeros = 0;
}
#include "../includes.h"

void	close_program(t_data *data, int status)
{
	if (data->fp != NULL)
		fclose(data->fp);
	if (data->str_readed != NULL)
		free(data->str_readed);
	if(data->c02sr_bin != NULL)
		free(data->c02sr_bin);
	if(data->ogr_bin != NULL)
		free(data->ogr_bin);
	if (status == 1)
		printf("\nClosing with a error!\n");
	exit(status);
}
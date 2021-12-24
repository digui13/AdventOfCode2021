# ifndef INCLUDES_H
# define INCLUDES_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DIGITS 12

typedef struct s_data
{
	FILE		*fp;
	char		*str_readed;
    long long	lsr;
    int			ogr;
	int			*ogr_bin;
	int			ogr_ones;
	int			ogr_zeros;
	int			c02sr;
	int			*c02sr_bin;
	int			c02sr_ones;
	int			c02sr_zeros;
	int			digit;
} t_data;

void	inicialize(t_data *data);
void	inicialize_array(int *array, int qty);
void	close_program(t_data *data, int status);
void	readfile(t_data *data);
int		convert_bin_to_dec(int *bin);
void	only_one_number_left_ogr(t_data *data);
void	only_one_number_left_c02sr(t_data *data);

#endif
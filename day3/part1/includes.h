# ifndef INCLUDES_H
# define INCLUDES_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DIGITS 12

void    inicialize_array(int *array, int qty);
int     *readfile(void);
int     *get_gamma(int zeros[], int ones[]);
int     *get_epsilon(int *gamma);
int     convert_bin_to_dec(int *bin);

#endif
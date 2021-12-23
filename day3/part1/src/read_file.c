#include "../includes.h"

int	*readfile(void)
{
	FILE	*fp;
	char	*str;
	int		*zeros;
	int		*ones;
	int		*gamma;
	int		cnt;

	fp = fopen("../input.txt", "r");
	if (fp == NULL)
		return (NULL);
	str = malloc(sizeof(char) * DIGITS + 1);
	if (str == NULL)
	{
		fclose(fp);
		return (NULL);
	}
	zeros = malloc(sizeof(int) * DIGITS);
	if (zeros == NULL)
	{
		free(str);
		fclose(fp);
		return (NULL);
	}
	ones = malloc(sizeof(int) * DIGITS);
	if (ones == NULL)
	{
		free(zeros);
		free(str);
		fclose(fp);
		return (NULL);
	}
	inicialize_array(zeros, DIGITS);
	inicialize_array(ones, DIGITS);
	while (fscanf(fp, "%s", str) == 1)
	{
		cnt = 0;
		while (cnt < DIGITS)
		{
			if (*(str + cnt) == '0')
				(*(zeros + cnt))++;
			else if (*(str + cnt) == '1')
				(*(ones + cnt))++;
			cnt++;
		}
	}
	fclose(fp);
	free(str);
	gamma = get_gamma(zeros, ones);
	free(zeros);
	free(ones);
	return(gamma);
}
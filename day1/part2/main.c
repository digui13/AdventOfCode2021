#include <stdio.h>

int main()
{
	FILE	*fp;
	int		n;
	int		bef_numbers[2];
	int		old_sum;
	int		actual_sum;
	int		cnt;

	fp = fopen("../input.txt", "r");
	cnt = 0;
	bef_numbers[0] = -1;
	bef_numbers[1] = -1;
	old_sum = -1;
	actual_sum = -1;
	if (fp == NULL)
		return (1);
	while (fscanf (fp, "%d", &n) == 1)
	{
		if (bef_numbers[0] == -1)
			bef_numbers[0] = n;
		else if (bef_numbers[1] == -1)
			bef_numbers[1] = n;
		else
		{
			if (old_sum != -1)
			{
				actual_sum = bef_numbers[0] + bef_numbers[1] + n;
				if (old_sum < actual_sum)
					cnt++;
			}
			old_sum = bef_numbers[0] + bef_numbers[1] + n;
			bef_numbers[0] = bef_numbers[1];
			bef_numbers[1] = n;
		}
	}
	printf("Number: %d\n", cnt);
	fclose(fp);
   return(0);
}
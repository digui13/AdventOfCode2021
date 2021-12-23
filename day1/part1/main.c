#include <stdio.h>

int main()
{
	FILE	*fp;
	int		n;
	int		n_bef;
	int		cnt;
	int		switcher;

	fp = fopen("../input.txt", "r");
	switcher = 1;
	cnt = 0;
	if (fp == NULL)
		return (1);
	while (fscanf (fp, "%d", &n) == 1)
	{
		if (switcher == 1)
			n_bef = n;
		switcher = 0;
		if (n > n_bef)
			cnt++;
		n_bef = n;
	}
	printf("Number: %d\n", cnt);
	fclose(fp);
   return(0);
}
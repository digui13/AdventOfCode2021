#include <stdio.h>

int main()
{
	FILE	*fp;
    char    str[20];
	int		n;
    int     value[2];
	int		cnt;

	fp = fopen("../input.txt", "r");
    value[0] = 0;
    value[1] = 0;
	if (fp == NULL)
		return (1);
	while (fscanf(fp, "%s %d", str, &n) == 2)
	{            
        if (str[0] == 'f')
            value[0] += n;
        else if (str[0] == 'd')
            value[1] += n;
        else if (str[0] == 'u')
            value[1] -= n;
	}
	printf("Number: %d * %d = %d\n", value[0], value[1], value[0] * value[1]);
	fclose(fp);
   return(0);
}
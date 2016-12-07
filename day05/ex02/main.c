#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main()
{
	char str1[] = "-42";

	int num1 = atoi(str1);

	int num_1 = ft_atoi(str1);

	if (num1 == num_1)
		printf("Test Num 1 %s", str1);
	
	return (0);
}

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main()
{
	char	x[] = "abcdef";

	printf("%i\n", ft_strlen(x));
	return(0);
}
*/

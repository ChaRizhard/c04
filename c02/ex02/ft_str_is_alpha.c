#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	char a = 65;
	char z = 122;

	if (str < 65 && str > 122)
	{
		write (1, "0", 1);
	}
	if (str = NULL)
	{
		write (1, "1", 1);
	}
	else
	{
		write (1, &str, 1);
	}
}

int main ()
{
	ft_str_is_alpha("This is a string");
	printf(ft_str_is_alpha("This is a string"));
	return(0);
}


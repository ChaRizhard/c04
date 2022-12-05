#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main()
{
	int i;
	i = 0;

	ft_putstr("This is my string");
	return(0);
}

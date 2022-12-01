#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char  *str)
{
	int i;
	i = 0;


	while (str[i] != '\0')
	{
		i++;
	}
}

int main()
{
	int i;
	i = 0;

	ft_strlen("This is my string");
	printf("%i", i);
	return(0);
}
			

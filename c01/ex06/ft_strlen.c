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
	return(i);
}

int main()
{
	char *str;

	str = "This is my string";
	printf("The sentence is %i characters long including spaces", ft_strlen(str));
	return(0);
}
			

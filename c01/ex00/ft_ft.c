#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int i;
	i = 20;

	ft_ft(&i);
	printf ("%i", i);
	return(0);
}

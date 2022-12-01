#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a, b, c, d;
	a = 21;
	b = 5;

	ft_div_mod(a, b, &c, &d);
	printf("%i Divided by %i equals %i remainder %i", a, b, c, d);
	return(0);
}

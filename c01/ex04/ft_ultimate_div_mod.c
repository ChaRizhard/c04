#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	int d;
	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

int main()
{
	int a;
	int b;
	int c;
	int d;
	a = 21;
	b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("%i ", a);
	printf("remainder ");
	printf("%i ", b);
	return(0);
}

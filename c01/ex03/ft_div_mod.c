#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a;
	int b;
	int c;
	int d;
	a = 21;
	b = 5;

	ft_div_mod(a, b, &c, &d);
	printf("%i ", a);
	printf("Divided by ");
	printf("%i ", b);
	printf("equals to ");
	printf("%i ", c);
	printf("remainder ");
	printf("%i ", d);
	return(0);
}

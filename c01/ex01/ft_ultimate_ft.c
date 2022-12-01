#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_ft(int  *********nbr)
{
	 *********nbr = 42;
}

int main()
{
	int i;
	int *nbr1, **nbr2, ***nbr3, ****nbr4, *****nbr5, ******nbr6, *******nbr7, ********nbr8;
	i = 20;
	nbr1 = &i;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	
	ft_ultimate_ft(&nbr8);
	printf("%i", i);
	return(0);
}

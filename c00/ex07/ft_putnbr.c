#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putnbr(int nb)
{
    int n;

	if (nb < '0')
    {
        n = -nb;

        ft_putchar('-');
        ft_putchar(n);
    }
    else

        ft_putchar(n);

}
//int main()
//{
//	ft_putnbr('2');
//	return(0);
//}

#include <unistd.h>

void ft_print_alphabet(void);
{
	write(2, &abcdefghijklmnopqrstuvwxyz, 26);
}

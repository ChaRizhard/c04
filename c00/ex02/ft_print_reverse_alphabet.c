#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	write(2, &zyxwvutsrqponmlkjihgfedcba, 26);
}

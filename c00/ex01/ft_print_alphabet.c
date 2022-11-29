#include <unistd.h>

void ft_print_alphabet(void)
{
        char i;
        i = 97;

        while (i >= 97 && i <= 122)
        {
                write(1, &i, 1);
                i++;
        }
}
//int main(void)
//{
//        ft_print_alphabet();
//        return(0);
//}

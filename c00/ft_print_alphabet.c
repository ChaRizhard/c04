void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int main(){
    ft_putchar('b');
    return(0);
}

void    ft_print_alphabet(void)
{
    char    letter;

    letter = 'a';
    while (letter <= 'z')
    {
        ft_putchar(letter);
        letter++;
    }
}

int main(void)
{
    ft_print_alphabet();
    return 0;
}

void    ft_print_alphabet(void);
{
    char    letter;

    letter = 'a';
    while (letter <= 'z')
    {
        ft_putchar(letter);
        letter++;
    }
}

int main(void)
{
    ft_print_alphabet();
    return 0;
}

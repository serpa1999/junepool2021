#include <stdio.h>
#include <unistd.h>

void    ft_putstr(char *str)
{
    char *str_ptr;

    str_ptr = str;
    while(*str_ptr != '\0')
    {
        write(1, str_ptr, 1);
        str_ptr++;
    }
}

int is_word(char symbol)
{
    if (((symbol >= 'a') && (symbol <= 'z'))
    || ((symbol >= 'A') && (symbol <= 'Z')))
        return (0);
    return (-1);
}

int is_space_or_tab(char symbol)
{
    if (symbol == ' ' || symbol == '\t')
        return (0);
    return (-1);
}

void    ft_first_word(char *str)
{
    char *str_ptr;

    str_ptr = str;
    while ((*str_ptr != '\0') && (is_space_or_tab(*str_ptr) == 0))
        str_ptr++;
    while ((*str_ptr != '\0') && (is_word(*str_ptr) == 0))
    {
        write(1, str_ptr, 1);
        str_ptr++;
    }
    write (1, "\n", 1);
}

int main(int argc, char **argv)
{
    char    *str;

    str = "         FOR PONIES              ";
    ft_first_word(str);
    return (0);
}
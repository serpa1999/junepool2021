#include <stdio.h>
#include <unistd.h>

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

void    ft_last_word(char *str)
{
    char    *str_ptr;

    str_ptr = str;
    if (*str_ptr != '\0')
    {
        while (*str_ptr != '\0')
            str_ptr++;
        str_ptr--;//check strle
        while (is_space_or_tab(*str_ptr) == 0)
            str_ptr--;
        while (is_word(*str_ptr) == 0)
            str_ptr--;
        str_ptr++;
        while (is_word(*str_ptr) == 0)
        {
            write(1, str_ptr, 1);
            str_ptr++;
        }
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_last_word(" 123 last     word is LAST    ");
    return (0);
}
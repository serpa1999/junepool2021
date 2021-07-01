#include <stdio.h>
#include <stdlib.h>

int is_number(char symbol)
{
    if (symbol >= '0'&& symbol <= '9')
        return (0);
    return (-1);
}

int ft_atoi(char *str)
{
    char    *str_ptr;
    int nb;
    int sign;

    nb = 0;
    sign = 1;
    str_ptr = str;
    while (*str_ptr != '\0' && *str_ptr >= 0 && *str_ptr < 32)
        str_ptr++;
    while (*str_ptr != '\0' && *str_ptr == ' ')
        str_ptr++;
    if (*str_ptr == '+' || *str_ptr == '-')
        {
            if (*str_ptr == '-')
                sign = -1;
            str_ptr++;
        }
    while (*str_ptr != '\0' && is_number(*str_ptr) == 0)
        {
            nb = nb * 10 + (*str_ptr - '0');
            str_ptr++;
        }
    if (nb > 0/* || *str_ptr == '0'*/)
        return (nb * sign);
    return (0);
}

int main(void)
{
    char    *str;

    str = "      1234";
    printf("fake atoi: %d\n", ft_atoi(str));
    printf("true atoi: %d\n", atoi(str));
    printf("-------------\n");

    str = "           --1234";
    printf("fake atoi: %d\n", ft_atoi(str));
    printf("true atoi: %d\n", atoi(str));
    printf("-------------\n");

    str = "    -1234aaaaaa";
    printf("fake atoi: %d\n", ft_atoi(str));
    printf("true atoi: %d\n", atoi(str));
    printf("-------------\n");

    str = "  999999999999999999999";
    printf("fake atoi: %d\n", ft_atoi(str));
    printf("true atoi: %d\n", atoi(str));
    return (0);
}
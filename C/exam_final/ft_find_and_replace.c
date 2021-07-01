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

void find_and_replace(char *str, char a, char b)
{
    char    *str_ptr;

    str_ptr = str;
    while (*str_ptr != '\0')
    {
        if (*str_ptr == a)
            *str_ptr = b;
        str_ptr++;
    }
}

int main(int argc, char **argv)
{
    char    *ptr_argv2;
    char    *ptr_argv3;

    if (argc == 4)
    {
        ptr_argv2 = argv[2];
        ptr_argv3 = argv[3];
        ptr_argv2++;
        ptr_argv3++;
        if (*ptr_argv2 != '\0' || *ptr_argv3 != '\0')
        {
            ft_putstr("ERROR_ARG\n");
            return (-1);
        }
        find_and_replace(argv[1], *argv[2], *argv[3]);
        ft_putstr(argv[1]);
    }
    else
        ft_putstr("ERROR_ARG_NUM\n");
    return (0);
}
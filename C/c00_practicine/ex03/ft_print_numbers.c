#include<stdio.h>
#include<unistd.h>

void ft_print_numbers();

int main()
{
        ft_print_numbers();

        return 0;
}

void ft_print_numbers()
{
		char  number;

		number = '0';

		for(int i = 0; i <= 9; i++)
                {
			write(1, &number, 1);
			number++;
		}
}

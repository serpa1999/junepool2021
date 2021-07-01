#include<stdio.h>
#include<unistd.h>

void	ft_putstr(char *str);

int main(void)
{
	char new_array[] = "hi";
	ft_putstr(new_array);
}

void	ft_putstr(char *str)
{
	for(char *char_pointer = str; *char_pointer != '\0'; char_pointer++)
	{
		char local_symbol = *char_pointer;
		write(1, &local_symbol, 1);
	}
}

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	char new_array[] = "hi";
	int output;

	output = ft_strlen(new_array);
	printf( "%d", output);
			return (0);
}

int ft_strlen(char *str)
{
	int length = 0;
	for(char *char_pointer = str; *char_pointer != '\0'; char_pointer++)
		length++;
	return (length);
}

#include<stdio.h>
#include<unistd.h>
#include "ft_strcpy.c"

int main()
{
	char source = 'string';
	char destination;

	char *string1 = ft_strcpy(&destination, &source);

	char out = *string1;

	printf("%s", out);
	return 0;
}

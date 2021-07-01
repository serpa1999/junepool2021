#include<stdio.h>
#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char destination;
	char source;

	source = *src;
	destination = source;
	return (&destination);
}

int main()
{
	char source = 'string';
	char destination;

	char *string1 = ft_strcpy(&destination, &source);

	char out = *string1;

	printf("%s", out);
	return 0;
}

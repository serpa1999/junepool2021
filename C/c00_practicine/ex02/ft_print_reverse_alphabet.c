#include<stdio.h>
#include<unistd.h>

void ft_alphabet();

int main()
{
        ft_alphabet();

        return 0;
}

void ft_alphabet()
{
                char alpha;
                int numberOfIteration;

                alpha = 'z';
                numberOfIteration = 26;

                for(int i = numberOfIteration; i > 0; i--)
                {
                        write(1, &alpha, 1);
                        alpha--;;
                }
}

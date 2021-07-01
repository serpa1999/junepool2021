#include<stdio.h>
#include<unistd.h>

void ft_int_negative();

int main()
{
        ft_int_negative();

        return 0;
}

void ft_int_negative(int n)
{
                int number;
                number = -4;

                if(number >= 0)
                        write(1, "P", 1);
                else
                        write(1, "N", 1);
}

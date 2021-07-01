#include <stdio.h>
#include <unistd.h>

int get_word_number(char symbol)
{
    int to;

    if ((symbol >= 'a') && (symbol <= 'z'))
        to = -97;
    else if ((symbol >= 'A') && (symbol <= 'Z'))
        to = -65;
    return (symbol + to + 1);
}

int main(int argc, char **argv)
{
    char symb;
    int i;

    symb = *argv[1];
    i = 0;
    while (i < get_word_number(symb))
    {
        write(1, &symb, 1);
        i++;
    }
    return (0);
}
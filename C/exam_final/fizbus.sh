#!/bin/bash

echo "#include <unistd.h>\\n
int main(void)\\n{" > ft_fizz_buss.c

for i in {0..9}
do
    if (( $i % 3 == 0 )) || (( $i % 5 == 0 ))
    then
        if (( $i % 3 == 0 ))
        then
            echo "\\twrite(1, \"fizz\", 5);" >> ft_fizz_buss.c
        fi
        if (( $i % 5 == 0 ))
        then
            echo "\\twrite(1, \"buss\", 5);" >> ft_fizz_buss.c
        fi
        echo "\\twrite(1, \"\\\n\", 1);" >> ft_fizz_buss.c
    else
        echo "\\twrite(1, \"$i\\\n\", 2);" >> ft_fizz_buss.c
    fi
done

for i in {10..100}
do
    if (( $i % 3 == 0 )) || (( $i % 5 == 0 ))
    then
        if (( $i % 3 == 0 ))
        then
            echo "\\twrite(1, \"fizz\", 5);" >> ft_fizz_buss.c
        fi
        if (( $i % 5 == 0 ))
        then
            echo "\\twrite(1, \"buss\", 5);" >> ft_fizz_buss.c
        fi
        echo "\\twrite(1, \"\\\n\", 1);" >> ft_fizz_buss.c
    else
        echo "\\twrite(1, \"$i\\\n\", 3);" >> ft_fizz_buss.c
    fi
done

echo "\\treturn (0);\\n}" >> ft_fizz_buss.c
#include <stdio.h>

/*unsigned char   reverse_bits(unsigned char octet)
{

}*/

int main(void)
{
    int i = 5;
    unsigned char c = 7;
//    unsigned char b = c;
//    c = c << 4;
//    printf("%d\n--------\n", c);
    while (i  <= 8)
    {
        printf("%d",  (c << i) & 1);
        i++;
    }
    //i = 8;
    /*while (i > 4)
    {
        printf("%d",  (c << i) & 1);
        i--;
    }*/
    //c = c << 4;
    //printf("\n\n%d\n--------\n");
    /*while (i--)
        printf("%d",  (b >> i) & 1);*/
    printf("\n");
    return (0);
}
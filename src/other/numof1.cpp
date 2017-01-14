#include <stdio.h>

unsigned int numof1(unsigned int x)
{
    unsigned int n = 0;
    for ( ; x ; n++ , x &= (x-1) );
    return n;
}

int main(void)
{
    unsigned int x = 0x1177;
    printf("numof %d is %d\n", x, numof1(x) );
}

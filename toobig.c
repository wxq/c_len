/* toobig.c -- 超出您系统上的最大 int 值 */
#include <stdio.h>
int main (void)
{
    short int i = 65534;
    unsigned short int j = 65534;

    printf ("%d %d %d\n", i, i+1, i+2);
    printf ("%u %u %u\n", j, j+1, j+2);
    return 0;
}
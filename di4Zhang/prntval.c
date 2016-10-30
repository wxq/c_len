// prntval.c -- 发现 printf () 函数返回值
#include <stdio.h>
int main (void) {
    int bph2p = 212;
    int rv;

    rv = printf ("%d F is water's bolling point.\n", bph2p);
    printf ("The printf () function printed %d characters.\n", rv);
    return 0;
}

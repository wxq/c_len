/* typesize.c -- 输出类型的大小 */
#include <stdio.h>
int main (void) {
    // c99 为类型大小提供一个 %zd 说明符 */
    printf ("int 类型的长度为 %u 比特。\n", sizeof (int));
    printf ("char 类型的长度为 %u 比特。\n", sizeof (char));
    printf ("long 类型的长度为 %u 比特。\n", sizeof (long));
    printf ("double 类型的长度为 %u 比特。\n", sizeof (double));
    return 0;
}
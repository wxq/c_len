/* shuZhuanZiFu.c -- 将输入的数字转换为 ASCII 字符 */
#include <stdio.h>
int main (void) {
    int shu;
    printf ("请输入一个小于 255 的数： ");
    scanf ("%d", &shu);
    if (shu < 255) {
        printf ("%d 是 %c 的编码。\n", shu, shu);
    } else {
        printf ("您输入的数字有误！\n");
    }
    return 0;
}
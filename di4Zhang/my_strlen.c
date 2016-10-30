// 计算字符串长度
#include <stdio.h>

int my_strlen(char a[]) {
    int i = 0;
    int len = 0;

    if (a[i] != 0) {
        for ( ; a[i] != 0; i++) {
            len++;
        }
        return len;
    }
    return len;
}

int main (void) {
    char ziFuChuan[40];
    printf ("请输入一个字符串：\n");
    scanf ("%s", ziFuChuan);
    printf ("您输入的字符串长度为：%d\n", my_strlen (ziFuChuan));
}
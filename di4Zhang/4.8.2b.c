#include <stdio.h>
int main (void) {
    char xing[9], ming[9];
    printf ("请输入你的姓: \n");
    scanf ("%s", xing);
    printf ("请输入你的名字：\n");
    scanf ("%s", ming);
    printf ("\"%-9s%-9s\"", xing, ming);
    printf ("   %s", ming);
    return 0;
}

#include <stdio.h>
int main(void) {
    float inch, Limi;
    printf("请输入英寸数：");
    scanf("%f", &inch);
    Limi = inch * 2.54;
    printf("%.2f英寸等于%.2f厘米。\n", inch, Limi);
    return 0;
}

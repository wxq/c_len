#include <stdio.h>

int main(void) {
    int toes = 10;
    int chengJi;
    int heJi;
    
    chengJi = toes * toes;
    heJi = toes + toes;

    printf("toes 的值为：%d;\n", toes);
    printf("两个 toes 的和为：%d;\n", heJi);
    printf("两个 toes 的乘积为：%d;\n", chengJi);

    return 0;
}

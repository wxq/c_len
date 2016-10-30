// defines.c -- 使用 limit.h 和 float.h 中定义的常量
#include <stdio.h>
#include <limits.h> // 整数限制
#include <float.h>  // 浮点数限制
int main (void) {
    printf ("此系统的一些数值极限: \n");
    printf ("\"int\"型的最大值：%d\n", INT_MAX);
    printf ("\"unsigned long\"型的最小值：%lld\n",LLONG_MIN);
    printf ("此系统的一字节=%d位\n", CHAR_BIT);
    printf ("\"double\"型的最大值：%e\n",DBL_MAX);
    printf ("普通\"float\"型最小值为：%e\n",FLT_MIN);
    printf ("float precision = %d digits\n", FLT_DIG);
    printf ("float epsilon = %e\n", FLT_EPSILON);
    return 0;
}
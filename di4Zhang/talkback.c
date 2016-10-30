// talkback.c -- 一个能为您提供一些信息的对话程序
#include <stdio.h>
#include <string.h>     // 提供 strlen () 函数的原型
#define DENSITY 62.4    // 人的密度 （单位是：英镑/立方英尺）
int main () {
    float weight, volume;
    int size, letters;
    char name[40];      // name 是一个有40个字符的数组

    printf ("嗨！你叫什么名字？\n");
    scanf ("%s", name);
    printf ("%s，你的体重是多少英镑？\n", name);
    scanf ("%f", &weight);
    size = sizeof name;
    letters = strlen (name);
    volume = weight / DENSITY;
    printf ("很好，%s，你的体积是：%2.2f立方英尺。\n", name, volume);
    printf ("还有，你的名字有%d个字符，\n", letters);
    printf ("我们有%d个字节来存储它。\n", size);
    return 0;
}
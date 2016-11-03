// lethead2.c
#include <stdio.h>
#include <string.h>
#define NAME "半岛数据公司"
#define ADDRESS "  华南国际商城中南大厦B座1005"
#define PLACE "辽宁省大连市"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main(void) {
    int spaces;

    show_n_char('*', WIDTH);        // 使用常亮作为参数
    putchar('\n');
    show_n_char(SPACE, 12);         // 使用常亮作为参数
    printf("%s\n", NAME);
    spaces = (WIDTH - strlen(ADDRESS)) / 2; // 让程序计算需要跳过多少空格
    show_n_char(SPACE, spaces);      // 用一个变量作为参数
    printf("%s\n", ADDRESS);
    show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2); // 用一个表达式作为参数
    printf("%s\n", PLACE);
    show_n_char('*', WIDTH);
    putchar('\n');

    return 0;
}

// show_n_char() 定义
void show_n_char(char ch, int num) {
    int count;

    for (count=1; count<=num; count++)
        putchar(ch);
}

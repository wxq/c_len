#include <stdio.h>

int one_three(char s[]) {
    printf("%s\n", s);

    return 0;
}

int two(void) {
    printf("two\n");

    return 0;
}

int main(void) {
    printf("starting now: \n");
    one_three("one");
    two();
    one_three("three");
    printf("done!\n");

    return 0;
}

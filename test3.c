#include <stdio.h>

int main (void) {
    for (int i = 0; i < 3; i++) {
        for (int j = 3; j > i; j--) {
            printf ("Smile!");
        }
        printf ("\n");
    }

    return 0;
}

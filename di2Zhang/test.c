#include <stdio.h>

int main( void )
{
    char a[] = "For he's a jolly good fellow!";
    char b[] = "Which nobody can deny!";

    for( int i = 0; i < 3; i++ )
    {
        printf("%s\n", a);
    }

    printf("%s\n", b);

    return 0;
}

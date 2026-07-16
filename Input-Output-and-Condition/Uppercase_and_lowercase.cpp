#include <stdio.h>

int main()
{
    char n;

    scanf(" %c", &n);

    if (n >= 'A' && n <= 'Z')
    {
        n = n + 32;
    }
    else
    {
        n = n - 32;
    }

    printf("%c\n", n);

    return 0;
}

#include <stdio.h>

int main()
{
    char s[105];
    int i;

    scanf("%[^\n]", s);

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", s);
    }

    return 0;
}

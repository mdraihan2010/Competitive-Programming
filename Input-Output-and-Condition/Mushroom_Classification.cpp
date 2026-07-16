#include <stdio.h>

int main()
{
    double a;

    scanf("%lf", &a);

    if (a >= 9.0)
    {
        printf("VERY TOXIC\n");
    }
    else if (a >= 5.0)
    {
        printf("TOXIC\n");
    }
    else
    {
        printf("SAFE\n");
    }

    return 0;
}

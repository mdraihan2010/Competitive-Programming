#include <stdio.h>

int main()
{
    double a, b;
    char x;

    scanf("%lf %c %lf", &a, &x, &b);

    if (x == '+')
    {
        printf("%.3lf\n", a + b);
    }
    else if (x == '-')
    {
        printf("%.3lf\n", a - b);
    }
    else if (x == '*')
    {
        printf("%.3lf\n", a * b);
    }
    else if (x == '/')
    {
        if (b != 0)
        {
            printf("%.3lf\n", a / b);
        }
        else
        {
            printf("ze\n");
        }
    }
    else
    {
        printf("ze\n");
    }

    return 0;
}

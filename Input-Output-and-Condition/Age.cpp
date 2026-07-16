#include <stdio.h>

int main()
{
    int a, b, c, x, y, z;
    int first_person_days, second_person_days;

    scanf("%d %d %d %d %d %d", &a, &b, &c, &x, &y, &z);

    first_person_days = (c * 365) + (b * 30) + a;
    second_person_days = (z * 365) + (y * 30) + x;

    if (first_person_days < second_person_days)
    {
        printf("1\n");
    }
    else
    {
        printf("2\n");
    }

    return 0;
}

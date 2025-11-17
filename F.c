#include<stdio.h>

main()
{
    int t;
    scanf("%d", & t);
    while (t--)
    {
        int n, sum = 0, rem;
        scanf("%d", & n);
        while (n != 0)
        {
            rem = n % 10
            sum += rem;
            n /= 10;
        }
        printf("%d\n", sum);
    }
}

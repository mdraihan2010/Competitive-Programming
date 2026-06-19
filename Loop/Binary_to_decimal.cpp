#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long decimal = 0;
    long long base = 1;

    while (n > 0)
    {
        int last_digit = n % 10;
        decimal += last_digit * base;
        base = base * 2;
        n = n / 10;
    }

    cout << decimal << endl;

    return 0;
}
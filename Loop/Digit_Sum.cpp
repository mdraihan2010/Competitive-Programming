#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, sum = 0, rem;
    cin >> n;
    n = abs(n);
    while (n != 0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    cout << sum << endl;
    return 0;
}
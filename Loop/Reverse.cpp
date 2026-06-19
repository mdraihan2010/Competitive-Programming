#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, sm = 0, rem;
    cin >> a >> b;
    long long sum = a + b;
    while (sum != 0)
    {
        rem = sum % 10;
        sm = sm * 10 + rem;
        sum /= 10;
    }
    cout << sm << endl;
    return 0;
}
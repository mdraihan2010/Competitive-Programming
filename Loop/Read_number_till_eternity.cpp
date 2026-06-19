#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        long long result = n * n * n * n * n;
        cout << result << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int days = 0;
    int stems = 0;

    while (n > 0)
    {
        n--;
        stems++;
        days++;
        if (stems == k)
        {
            n++;
            stems = 0;
        }
    }
    cout << days << endl;

    return 0;
}
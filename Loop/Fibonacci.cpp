#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a = 0;
    long long b = 1;
    long long next_term = 0; 
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        if (i <= 1)
            next_term = i;
        else
        {
            next_term = a + b;
            a = b;
            b = next_term;
        }
    }

    cout << next_term << endl;

    return 0;
}
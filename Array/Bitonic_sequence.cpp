#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0;
    while (i < n - 1 && a[i] < a[i + 1])
    {
        i++;
    }
    while (i < n - 1 && a[i] > a[i + 1])
    {
        i++;
    }
    if (i == n - 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
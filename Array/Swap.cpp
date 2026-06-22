#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int qx[q], qy[q];
    for (int i = 0; i < q; i++)
    {
        cin >> qx[i] >> qy[i];
    }

    for (int i = q - 1; i >= 0; i--)
    {
        int x = qx[i] - 1;
        int y = qy[i] - 1;
        swap(b[x], b[y]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << "\n";

    return 0;
}
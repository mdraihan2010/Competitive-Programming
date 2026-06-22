#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int arr[305];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (q--)
    {
        int pos, val;
        cin >> pos >> val;

        int target_idx = pos - 1;

        for (int i = n; i > target_idx; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[target_idx] = val;
        n++;

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
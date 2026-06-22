#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int neg[n], pos[n];
    int neg_count = 0, pos_count = 0;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val < 0)
        {
            neg[neg_count] = val;
            neg_count++;
        }
        else
        {
            pos[pos_count] = val;
            pos_count++;
        }
    }

    int i = 0, j = 0;

    while (i < neg_count || j < pos_count)
    {
        if (i < neg_count)
        {
            cout << neg[i] << " ";
            i++;
        }
        if (j < pos_count)
        {
            cout << pos[j] << " ";
            j++;
        }
    }

    cout << endl;
    return 0;
}
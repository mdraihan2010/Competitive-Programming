#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int count = 0;
    int current_freq = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            current_freq++;
        }
        else
        {
            if (current_freq > 2)
            {
                count++;
            }
            current_freq = 1; 
        }
    }
    if (current_freq > 2)
    {
        count++;
    }

    cout << count << endl;
    return 0;
}
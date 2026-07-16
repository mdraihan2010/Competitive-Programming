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

    int max_frequency = 1;
    int most_frequent_value = arr[0];

    int current_freq = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            current_freq++;
        }
        else
        {
            if (current_freq > max_frequency)
            {
                max_frequency = current_freq;
                most_frequent_value = arr[i - 1];
            }
            else if (current_freq == max_frequency)
            {
                if (arr[i - 1] > most_frequent_value)
                {
                    most_frequent_value = arr[i - 1];
                }
            }
            current_freq = 1;
        }
    }
    if (current_freq > max_frequency)
    {
        most_frequent_value = arr[n - 1];
    }
    else if (current_freq == max_frequency)
    {
        if (arr[n - 1] > most_frequent_value)
        {
            most_frequent_value = arr[n - 1];
        }
    }

    cout << most_frequent_value << endl;
    return 0;
}

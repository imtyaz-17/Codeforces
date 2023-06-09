
#include <bits/stdc++.h>

using namespace std;

int findMaxGCD(int arr[], int n)
{
    int high = 0;
    for (int i = 0; i < n; i++)
        high = max(high, arr[i]);

    int divisors[high + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= sqrt(arr[i]); j++)
        {
            if (arr[i] % j == 0)
            {
                divisors[j]++;
                if (j != arr[i] / j)
                    divisors[arr[i] / j]++;
            }
        }
    }
    for (int i = high; i >= 1; i--)
        if (divisors[i] > 1)
            return i;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int g = findMaxGCD(arr, n);
        if (g > 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        long long int res = arr[0],diff;
        for (i = 1; i < n; i++)
        {
            if (res < arr[i])
            {
                diff =(arr[i] - res + 1) / 2;
                res += diff;
            }
        }

        cout << res << endl;
    }
}
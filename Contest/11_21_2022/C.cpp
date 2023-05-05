#include <bits/stdc++.h>
using namespace std;

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
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            arr2[i] = arr[i];
        }
        sort(arr2, arr2 + n);

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr2[n - 1])
            {
                cout<<(arr[i] -arr2[n-2])<<" ";
            }
            else
            {
                cout << (arr[i] - arr2[n - 1]) << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
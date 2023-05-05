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
        int ans, f, h;
        f = arr[0], h = arr[0];
        for (i = 1; i < n; i++)
        {
            f= f | arr[i];
            h= h& arr[i];
        }
        ans = f-h;
        cout << ans << endl;;
    }
    return 0;
}
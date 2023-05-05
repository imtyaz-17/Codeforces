#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1000005

void solve()
{
    int n;
    cin >> n;

    int arrA[n], arrB[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arrB[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arrA[i] <= arrB[i])
        {
            swap(arrA[i], arrB[i]);
        }
    }
    int maxA = *max_element(arrA, arrA + n);
    int maxB = *max_element(arrB, arrB + n);

    if ((arrA[n - 1] == maxA) && (arrB[n - 1] == maxB))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

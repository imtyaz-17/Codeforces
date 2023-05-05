#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution()
{
    ll n, k;
    cin >> n >> k;
    ll l, r;
    ll lCount = 0, rCount = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        if (l == k)
            lCount++;
        if (r == k)
            rCount++;
    }
    if (lCount > 0 && rCount > 0)
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
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
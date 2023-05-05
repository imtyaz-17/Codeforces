#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6 + 2

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == c && b == d)
    {
        cout << 0 << endl;
        return;
    }
    if (d < b)
    {
        cout << -1 << endl;
        return;
    }
    ll rem = a + d - b;
    if (rem < c)
    {
        cout << -1 << endl;
        return;
    }
    ll ans;
    ans = abs(rem - c) + (d - b);
    cout << ans << endl;
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
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6 + 2

void solve()
{
    ll n, i;
    cin >> n;
    vector<ll> vec(n);
    map<ll, ll> mp;

    for (ll i = 0; i < n; i++)
    {
        cin >> vec[i];
        mp[vec[i]]++;
    }
    if (mp[0] <= ((mp.size() + 1) / 2))
    {
    }

    // if (mp[0] > (mp.size()))
    // {
    //     if (n - mp[0] == mp.size())
    //     {
    //         cout << 2 << endl;
    //         return;
    //     }
    //     else
    //     {
    //
    //     }
    // }
    // else
    // {
    //     cout << 0 << endl;
    //     return;
    // }
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
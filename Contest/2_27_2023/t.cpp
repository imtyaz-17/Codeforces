#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6 + 2

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> pm(m);
    for (ll i = 0; i < m; i++)
        cin >> pm[i];
    unordered_map <ll, ll> ump;
    for (ll i = 1; i <= n; i++)
        ump[i] = -1;
    ll cnt = 1;
    ll tmp = n;
    for (ll i = 0; i < m; i++)
    {
        if (tmp == 0)
            break;
        if (ump.find(pm[i]) == ump.end())
        {
            ump[pm[i]] = 1;
           ump[tmp] = cnt;
            tmp--;
        }
        cnt++;
    }
    for (auto x : ump)
    {
        if (x.first <= n)
            cout << x.second << " ";
    }

    cout << endl;
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
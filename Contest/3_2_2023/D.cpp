#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1000002

void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    string ss;
    ss = s.substr(2, n - 1);
    ll sIndx = 0, ssIndx = 0;

    ll ans = 1;
    while (sIndx < n - 2)
    {
        if (s[sIndx] != ss[ssIndx])
        {
            ans++;
        }
        sIndx++;
        ssIndx++;
    }

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

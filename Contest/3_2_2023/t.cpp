#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1000002

void solve()
{
    ll n, k, i = 0;
    cin >> n >> k;

    string sng;
    cin >> sng;
    map<char, int> lowerMap;
    map<char, int> upperMap;

    for (i = 0; i < n; i++)
    {
        if (isupper(sng[i]))
        {
            upperMap[sng[i]]++;
        }
        else
        {
            lowerMap[sng[i]]++;
        }
    }
    ll ans = 0;
    ll remainder;

    for (char c = 'a'; c <= 'z'; c++)
    {
        ll minVal = min(lowerMap[c], upperMap[(c - 32)]);
        ans += minVal;
        lowerMap[c] -= minVal;
        upperMap[c - 32] -= minVal;
    }
    for (char c = 'a'; c <= 'z'; c++)
    {
        remainder = max(lowerMap[c], upperMap[(c - 32)]);
        int minVal = min(k, remainder / 2);
        ans += minVal;
        k -= minVal;
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

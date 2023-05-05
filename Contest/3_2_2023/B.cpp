#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1000002

void solve()
{
    ll n, k, i;
    cin >> n >> k;

    string sng;
    cin >> sng;
    map<char, int> freq;
    for (auto s : sng)
    {
        freq[s]++;
    }
    ll ans = 0;
    ll remainder;

    for (char c = 'a'; c <= 'z'; c++)
    {
        ll minVal = min(freq[c], freq[c - 32]);
        ans += minVal;
        freq[c] -= minVal;
        freq[c - 32] -= minVal;
    }
    for (char c = 'a'; c <= 'z'; c++)
    {
        remainder = max(freq[c], freq[c - 32]);
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

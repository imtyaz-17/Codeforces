#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6 + 2

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll abs_a = abs(a);
    ll abs_b = abs(b);
    ll result = max(abs_a, abs_b) + max(min(abs_a, abs_b),max(abs_a, abs_b) - 1);
    cout << result << endl;
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
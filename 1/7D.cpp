#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    const ll PRIME = 107;
    const ll MOD = 1e9 + 7;

    string s;
    cin >> s;
    ll left(0), right(0), mult(1), cnt(0);
    vector<ll> f(s.size() + 1, 0);

    for (ll p = 0; p < s.size(); p++)
    {
        left = PRIME * left + s[p];
        left %= MOD;
        right = mult * s[p] + right;
        mult *= PRIME;
        mult %= MOD;
        right %= MOD;
        if (left == right)
        {
            f[p + 1] = f[(p + 1) / 2] + 1;
        }
        cnt += f[p + 1];
    }

    cout << cnt << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1000002

void solve()
{
    ll n, i;
    cin >> n;

    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string meo = "";
    for (i = 0; i < n; i++)
    {
        if (s[i] != s[i - 1])
            meo += s[i];
    }

    if ((meo.compare("meow")) == 0)
        cout << "Yes" << endl;
    else
        cout << "NO" << endl;
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

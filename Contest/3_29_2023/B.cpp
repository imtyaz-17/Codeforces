#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6 + 2

void solve()
{
    ll n, i;
    char c;
    cin >> n >> c;
    // vector<ll> vec(n);
    // map<ll, ll> mp;
    string s;
    cin >> s;
    s += s;

    int time = 0, count;

    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
        {
            count = 0;
            while (s[i] != 'g' && i < s.size())
            {
                count++;
                i++;
            }

            if (count > time)
            {
                time = count;
            }
        }
    }

    cout << time << endl;
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
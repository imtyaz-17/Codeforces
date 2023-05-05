#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution()
{
    ll a, b, n, m;
    cin >> n >> m;
    string s, t;
    cin >> s;
    cin >> t;
    reverse(t.begin(), t.end());

    // string newS = s + t;
    s.append(t);
    int count = 0;
    for (int i = 0; i < (n + m - 1); i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        if (count > 1)
        {
            cout << "NO" << endl;
            break;
        }
    }
    if (count <= 1)
        cout << "YES" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
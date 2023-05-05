#include <bits/stdc++.h>
using namespace std;
int main()
{

    const int N = 26;
    string s;
    cin >> s;
    vector<long> a(N, 0);
    for (long p = 0; p < s.size(); p++)
    {
        ++a[s[p] - 'a'];
    }
    vector<int> odds;
    for (int p = 0; p < N; p++)
    {
        if (a[p] % 2)
        {
            odds.push_back(p);
        }
    }

    int ds = odds.size();
    for (int p = 0; p < ds / 2; p++)
    {
        ++a[odds[p]];
        --a[odds[ds - 1 - p]];
    }

    string t("");
    if (ds % 2)
    {
        char oddLetter = odds[ds / 2];
        t += ('a' + oddLetter);
        --a[oddLetter];
    }

    for (long p = N - 1; p >= 0; p--)
    {
        long u = a[p] / 2;
        char c = 'a' + p;
        string w = string(u, c);
        t = w + t + w;
    }

    cout << t << endl;

    return 0;
}
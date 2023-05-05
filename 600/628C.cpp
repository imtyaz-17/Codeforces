#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string t;
    t = s;

    for (long p = 0; p < s.size(); p++)
    {
        char c = s[p];
        int da = c - 'a';
        int dz = 'z' - c;
        int d = (da > dz) ? da : dz;
        char x = (da > dz) ? 'a' : 'z';

        if (d < k)
        {
            t[p] = x;
            k -= d;
        }
        else
        {
            t[p] = s[p] + (da > dz ? (-1) : 1) * k;
            k = 0;
            break;
        }
    }

    if (k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << t << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n;
    cin >> n;
    vector<long> v(n, 0);
    int64_t total(0);
    for (long row = 0; row < n; row++)
    {
        string s;
        cin >> s;
        long count(0);
        for (long col = 0; col < n; col++)
        {
            if (s[col] == 'C')
            {
                ++count;
                ++v[col];
            }
        }
        total += count * (count - 1) / 2;
    }

    for (long p = 0; p < n; p++)
    {
        total += v[p] * (v[p] - 1) / 2;
    }
    cout << total << endl;

    return 0;
}
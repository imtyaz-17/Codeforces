#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n;
    string s;
    cin >> n >> s;
    long count(1);
    for (long p = 1; p < s.size(); p++)
    {
        count += (s[p] != s[p - 1]);
    }
    long ans = (s.size() < (count + 2)) ? s.size() : (count + 2);
    cout << ans << endl;

    return 0;
}
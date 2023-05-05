#include <bits/stdc++.h>
using namespace std;

int main()
{

    long k, a, b;
    std::cin >> k >> a >> b;
    string s;
    cin >> s;
    if (s.size() < k * a || s.size() > k * b)
    {
        cout << "No solution" << endl;
        return 0;
    }
    long avg = s.size() / k;
    long add = s.size() % k;
    long cnt(0);
    for (long p = 0; p < s.size(); p++)
    {
        cout << s[p];
        ++cnt;
        if (cnt >= avg + (add > 0))
        {
            cout << endl;
            cnt = 0;
            --add;
        }
    }

    return 0;
}
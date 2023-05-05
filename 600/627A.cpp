#include <bits/stdc++.h>
using namespace std;
int main()
{

    int s, x;
    cin >> s >> x;
    int d = (s - x) / 2;
    if ((d < 0) || ((s & 1) != (x & 1)) || (d & x) != 0)
    {
        cout << 0 << endl;
        return 0;
    }
    int count(0);
    while (x)
    {
        count += x % 2;
        x /= 2;
    }
    int total = 1LL << count;
    if (d == 0)
    {
        total -= 2;
    }
    cout << total << endl;

    return 0;
}
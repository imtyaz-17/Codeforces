#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n;
    double a, b;
    cin >> n >> a >> b;
    set<double> slopes;
    bool vertical = 0;
    while (n--)
    {
        long x, y;
        cin >> x >> y;
        if (x == a)
        {
            vertical = 1;
        }
        else
        {
            slopes.insert((y - b) / (x - a));
        }
    }

    cout << (slopes.size() + vertical) << endl;

    return 0;
}
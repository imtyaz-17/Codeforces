#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, xcnt = 0, ycnt = 0;
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if (x1 == x2 || x2 == x3 || x1 == x3)
            xcnt++;
        if (y1 == y2 || y2 == y3 || y1 == y3)
            ycnt++;

        if (xcnt >= 1 && ycnt >= 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
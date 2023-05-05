#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> a(n);
    for (int p = 0; p < n; p++)
    {
        int x, y;
        cin >> x >> y;
        a[p] = make_pair(make_pair(x, y), p + 1);
    }

    sort(a.begin(), a.end());
    cout << a[0].second << a[1].second;
    int third(0);
    for (int p = 2; p < n; p++)
    {
        int x0 = a[0].first.first, y0 = a[0].first.second;
        int x1 = a[1].first.first, y1 = a[1].first.second;
        int xp = a[p].first.first, yp = a[p].first.second;
        if ((yp - y0) * (x1 - x0) != (xp - x0) * (y1 - y0))
        {
            third = a[p].second;
            break;
        }
    }

    cout << third << endl;

    return 0;
}
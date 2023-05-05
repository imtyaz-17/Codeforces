#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n, m;
    cin>>n>>m;
    vector<vector<int>> mp(n, vector<int>(m, 0));
    for (long row = 0; row < n; row++)
    {
        for (long col = 0; col < m; col++)
        {
            cin>>mp[row][col];
        }
    }
    long length, width;
    cin>>length>>width;

    long minTrees(n * m + 1);

    for (long sr = 0; sr + length <= n; sr++)
    {
        for (long sc = 0; sc + width <= m; sc++)
        {
            long cnt(0);
            for (long row = sr; row < sr + length; row++)
            {
                for (long col = sc; col < sc + width; col++)
                {
                    cnt += mp[row][col];
                }
            }
            minTrees = (minTrees < cnt) ? minTrees : cnt;
        }
    }

    for (long sr = 0; sr + width <= n; sr++)
    {
        for (long sc = 0; sc + length <= m; sc++)
        {
            long cnt(0);
            for (long row = sr; row < sr + width; row++)
            {
                for (long col = sc; col < sc + length; col++)
                {
                    cnt += mp[row][col];
                }
            }
            minTrees = (minTrees < cnt) ? minTrees : cnt;
        }
    }

    cout<< minTrees;

    return 0;
}
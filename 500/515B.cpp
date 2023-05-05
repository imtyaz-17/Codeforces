#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m;
    cin>>n>>m;
    vector<bool> boys(n, 0), girls(m, 0);

    int f, temp;
    cin>>f;
    for (int p = 0; p < f; p++)
    {
        cin>>temp;
        boys[temp] = 1;
    }
    cin>>f;
    for (int p = 0; p < f; p++)
    {
        cin>>temp;
        girls[temp] = 1;
    }

    long day(0);
    for (long p = 0; p < m * m * n * n; p++)
    {
        boys[p % n] = girls[p % m] = boys[p % n] | girls[p % m];
    }

    for (int p = 0; p < n; p++)
    {
        if (!boys[p])
        {
            puts("No");
            return 0;
        }
    }
    for (int p = 0; p < m; p++)
    {
        if (!girls[p])
        {
            puts("No");
            return 0;
        }
    }
    puts("Yes");

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int n;
    cin >> n;
    vector<long long int> a(n);
    for (long long int p = 0; p < n; p++)
    {
        cin >> a[p];
    }
    if (n == 1)
    {
        puts("0");
        return 0;
    }

    long long int left(-1), right(n);
    long long int ls(0), rs(0), ms(0);
    while (left < right)
    {
        if (ls <= rs)
        {
            ls += a[++left];
        }
        else
        {
            rs += a[--right];
        }
        if (left < right && ls == rs)
        {
            ms = ls;
        }
    }

    cout << ms << endl;

    return 0;
}
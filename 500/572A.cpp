#include <bits/stdc++.h>
using namespace std;
int main()
{

    long na, nb;
    cin >> na >> nb;
    long k, m;
    cin >> k >> m;
    long low, high;
    for (long p = 0; p < na; p++)
    {
        long temp;
        cin >> temp;
        if (p == k - 1)
        {
            low = temp;
        }
    }

    for (long p = 0; p < nb; p++)
    {
        long temp;
        cin >> temp;
        if (p == nb - m)
        {
            high = temp;
        }
    }

    puts((low < high) ? "YES" : "NO");

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
long getLargestPower(long x)
{

    if (x <= 0)
    {
        return 0;
    }
    long a = 1;
    while (2 * a <= x)
    {
        a *= 2;
    }
    return a;
}

int main()
{

    long n, b, p;
    cin >> n >> b >> p;
    long bottles(0), towels(p * n);
    while (n > 1)
    {
        long m = getLargestPower(n);
        bottles += b * m + (m / 2);
        n -= m / 2;
    }

    cout << bottles << " " << towels << endl;

    return 0;
}
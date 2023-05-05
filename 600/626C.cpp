#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n, m;
    cin >> n >> m;
    long a(2 * n), b(3 * m);
    for (int p = 6; p <= a && p <= b; p += 6)
    {
        if (a <= b)
        {
            a += 2;
        }
        else
        {
            b += 3;
        }
    }

    cout << ((a > b) ? a : b) << endl;

    return 0;
}
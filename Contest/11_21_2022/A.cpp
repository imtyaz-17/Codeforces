#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int m;
        if ((a < b && b < c) || (c < b && b < a))
            m = b;

        else if ((b < a && a < c) || (c < a && a < b))
            m = a;
        else
            m = c;
        cout << m << endl;
    }

    return 0;
}
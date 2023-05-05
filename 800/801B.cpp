#include <bits/stdc++.h>
using namespace std;
int main()
{

    string x, y;
    cin >> x >> y;
    string z(y);
    bool possible(true);
    for (long p = 0; p < x.size(); p++)
    {
        if (x[p] < y[p])
        {
            possible = false;
            break;
        }
    }
    cout << (possible ? z : "-1") << endl;

    return 0;
}
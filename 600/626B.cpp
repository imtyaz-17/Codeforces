#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    string s;
    cin >> n >> s;

    int b(0), g(0), r(0);
    for (int p = 0; p < n; p++)
    {
        if (s[p] == 'B')
        {
            ++b;
        }
        else if (s[p] == 'G')
        {
            ++g;
        }
        else if (s[p] == 'R')
        {
            ++r;
        }
    }

    if ((g && r) || (!g && !r) || (g >= 2 && b) || (r >= 2 && b))
    {
        cout << 'B';
    }
    if ((b && r) || (!b && !r) || (b >= 2 && g) || (r >= 2 && g))
    {
        cout << 'G';
    }
    if ((b && g) || (!b && !g) || (b >= 2 && r) || (g >= 2 && r))
    {
        cout << 'R';
    }
    cout << endl;

    return 0;
}
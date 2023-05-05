#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    long count(0);
    bool changed(false);
    for (long p = 1; p < s.size(); p++)
    {
        if (s[p - 1] == 'V' && s[p] == 'K')
        {
            ++count;
            s[p - 1] = s[p] = 'x';
        }
    }

    for (long p = 1; p < s.size(); p++)
    {
        if ((s[p - 1] == 'V' && s[p] == 'V') || (s[p - 1] == 'K' && s[p] == 'K'))
        {
            ++count;
            break;
        }
    }

    cout << count << endl;

    return 0;
}
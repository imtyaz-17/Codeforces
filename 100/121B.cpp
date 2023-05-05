#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    for (int p = 0; p < s.length() && k; p++)
    {
        if (s[p] == '4' && s[p + 1] == '7')
        {
            if (p % 2 == 0)
            {
                s[p] = s[p + 1] = '4';
            }
            else if (s[p - 1] == '4')
            {
                if (k % 2 == 0)
                {
                    s[p] = '4';
                }
                else
                {
                    s[p] = '7';
                }
                break;
            }
            else
            {
                s[p] = s[p + 1] = '7';
            }
            k--;
        }
    }

    cout << s << endl;

    return 0;
}
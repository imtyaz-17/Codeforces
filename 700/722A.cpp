#include <bits/stdc++.h>
using namespace std;
int main()
{

    string t;
    cin >> t;
    string s;
    cin >> s;

    int h = 10 * (s[0] - '0') + (s[1] - '0');
    int m = 10 * (s[3] - '0') + (s[4] - '0');

    if (t == "24" && h > 23)
    {
        s[0] = '0';
    }
    else if (t == "12" && h > 12 && s[1] != '0')
    {
        s[0] = '0';
    }
    else if (t == "12" && h > 12 && s[1] == '0')
    {
        s[0] = '1';
    }
    else if (t == "12" && h == 0)
    {
        s[1] = '1';
    }
    if (m > 59)
    {
        s[3] = '0';
    }
    cout << s << endl;

    return 0;
}
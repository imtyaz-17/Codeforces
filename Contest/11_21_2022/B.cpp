#include <bits/stdc++.h>
using namespace std;

char largestCharacter(string str)
{
    vector<bool> lower(26, false);
char s;
    for (auto ch : str)
    {
        lower[ch - 'a'] = true;
    }
    for (int i = 25; i >= 0; i--)
    {
        if (lower[i] == true)
        {
            char str;
            str += char(i + 'A');
            return str;
        }
    }
    
return s;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        char lg = largestCharacter(s);

        cout << (int(lg)-64)<<endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    for (int p = 0; p < s.size() / 2; p++)
    {
        if (s[p] != s[s.size() - 1 - p])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    string s;
    getline(cin, s);
    string t;
    for (int p = 0; p <= s.size(); p++)
    {
        t = s;
        t.insert(p, "a");
        t[p] = t[s.size() - p];
        if (isPalindrome(t))
        {
            cout << t << endl;
            return 0;
        }
    }

    cout << "NA" << endl;

    return 0;
}
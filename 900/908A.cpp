#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    long cnt(0);
    for (long p = 0; p < s.size(); p++)
    {
        cnt += (s[p] == 'a') || (s[p] == 'e') || (s[p] == 'i') || (s[p] == 'o') || (s[p] == 'u') || (s[p] == '1') || (s[p] == '3') || (s[p] == '5') || (s[p] == '7') || (s[p] == '9');
    }

    cout << cnt << endl;
    return 0;
}
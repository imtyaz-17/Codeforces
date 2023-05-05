#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    long long cnt = 0;
    for (int i = 0; s[i]; i++)
    {
        if ((s[i] + 48) % 4 == 0)
            cnt++;
    }
    for (int i = 1; s[i]; i++)
    {
        int a = (s[i - 1] + 48) * 10 + (s[i] + 48);
        if (a % 4 == 0)
        {
            cnt += i;
        }
    }

    cout << cnt << endl;

    return 0;
}
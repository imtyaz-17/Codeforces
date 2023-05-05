#include <bits/stdc++.h>
using namespace std;

void solution()
{

    int number;
    cin >> number;
    string s;
    cin >> s;
    int x = 0, y = 0;
    bool imty = false;
    for (int i = 0; i < number; i++)
    {
        if (s[i] == 'U')
            y += 1;
        else if (s[i] == 'D')
            y -= 1;
        else if (s[i] == 'R')
            x += 1;
        else if (s[i] == 'L')
            x -= 1;
        if (x == 1 && y == 1)
            imty = true;
    }
    if (imty)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
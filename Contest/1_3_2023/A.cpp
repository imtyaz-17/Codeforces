#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;

    string s;

    cin >> s;
    int leftR, rightL;
    leftR = rightL = -1;
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == 'R' && s[i] == 'L')
        {
            rightL = i;
        }
        else if (s[i - 1] == 'L' && s[i] == 'R')
        {
            leftR = i;
        }
    }
    if (leftR == -1 && rightL == -1)
        cout << -1 << endl;
    else
    {
        if (rightL >= 0)
            cout << 0 << endl;
        else
            cout << leftR << endl;
    }
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
#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    bool hor = (s[0] == 'a') || (s[0] == 'h');
    bool ver = (s[1] == '1') || (s[1] == '8');
    if (hor && ver)
    {
        puts("3");
    }
    else if (hor || ver)
    {
        puts("5");
    }
    else
    {
        puts("8");
    }

    return 0;
}

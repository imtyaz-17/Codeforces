#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s, t;
    cin >> s >> t;
    size_t count(0);
    size_t found(-t.size());
    while (true)
    {
        found = s.find(t, found + t.size());
        if (found == string::npos)
        {
            break;
        }
        else
        {
            ++count;
        }
    }

    cout << count << endl;

    return 0;
}
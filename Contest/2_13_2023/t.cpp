#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string s, t;
        cin >> n >> m >> s >> t;

        // check if there's a pair of touching blocks with the same color
        bool has_same_color = false;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                has_same_color = true;
                break;
            }
        }
        for (int i = 1; i < m; i++)
        {
            if (t[i] == t[i - 1])
            {
                has_same_color = true;
                break;
            }
        }

        if (has_same_color)
        {
            cout << "NO" << endl;
            continue;
        }

        // check if the top block of one tower has the same color as the second block of the other tower
        if ((s[0] == t[1] && t[1] != t[0]) || (t[0] == s[1] && s[1] != s[0]))
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }

    return 0;
}

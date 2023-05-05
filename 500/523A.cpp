#include <bits/stdc++.h>
using namespace std;
int main()
{

    int w, h;
    cin >> w >> h;
    vector<string> s(h);
    for (int p = 0; p < h; p++)
    {
        getline(cin, s[p]);
    }
    for (int p = 0; p < 2 * w; p++)
    {
        for (int q = 0; q < 2 * h; q++)
        {
            cout << s[q / 2][p / 2];
        }
        cout << endl;
    }

    return 0;
}
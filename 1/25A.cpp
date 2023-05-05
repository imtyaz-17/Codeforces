#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, input, loc1, loc2, c = 0, d = 0;
    vector<int> v;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    for (i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
        {
            c++;
            loc1 = i;
        }
        else
        {
            d++;
            loc2 = i;
        }
    }
    if (c == 1)
        cout << loc1 + 1 << endl;
    else if (d == 1)
        cout << loc2 + 1 << endl;
}
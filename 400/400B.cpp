#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n(0), m(0);
    scanf("%d %d\n", &n, &m);

    set<int> output;
    bool possible(1);

    for (int row = 0; row < n; row++)
    {
        string initialState("");
        getline(cin, initialState);
        int dwarfPos = initialState.find("G");
        int candyPos = initialState.find("S");

        if (dwarfPos > candyPos)
        {
            possible = 0;
            break;
        }
        else if (dwarfPos < candyPos)
        {
            output.insert(candyPos - dwarfPos);
        }
    }

    if (possible)
    {
        cout << output.size() << endl;
    }
    else
    {
        puts("-1");
    }

    return 0;
}
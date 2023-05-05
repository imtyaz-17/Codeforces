#include <bits/stdc++.h>
using namespace std;

int main()
{

    string first;
    getline(cin, first);
    string second;
    getline(cin, second);

    string med(first);
    for (int p = first.size() - 1; p >= 0; p--)
    {
        if (med[p] == 'z')
        {
            med[p] = 'a';
        }
        else
        {
            ++med[p];
            break;
        }
    }

    bool possible(0);
    for (int p = 0; p < med.size(); p++)
    {
        if (med[p] < second[p])
        {
            possible = 1;
            break;
        }
    }

    if (possible)
    {
        cout << med << endl;
    }
    else
    {
        cout << "No such string" << endl;
    }

    return 0;
}
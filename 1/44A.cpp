#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    set<pair<string, string>> leaves;
    while (n--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        leaves.insert(pair<string, string>(s1, s2));
    }

    cout << leaves.size() << std::endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    scanf("%d\n", &n);
    map<string, long> database;
    string name("");

    while (n--)
    {
        getline(cin, name);
        if (database.find(name) == database.end())
        {
            puts("OK");
            database[name] = 1;
        }
        else
        {
            cout << name << database[name] << endl;
            ++database[name];
        }
    }

    return 0;
}
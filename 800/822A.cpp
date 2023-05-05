#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b;
    cin >> a >> b;
    int g(1);
    for (long p = 1; (p <= a) && (p <= b); p++)
    {
        g *= p;
    }
    cout << g << endl;

    return 0;
}
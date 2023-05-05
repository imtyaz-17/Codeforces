#include <bits/stdc++.h>
using namespace std;
int main()
{

    long x1, y1;
    cin >> x1 >> y1;
    long x2, y2;
    cin >> x2 >> y2;
    cout << max(abs(x1 - x2), abs(y1 - y2)) << endl;

    return 0;
}
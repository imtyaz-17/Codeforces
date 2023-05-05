#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int number;
    cin >> number;
    //vector<int> arr(number), odd, even;
    int half = number / 2;
    if (number % 2 != 0)
        cout << -1 << endl;
    else
    {
        cout << 1 << " " << number / 2 << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
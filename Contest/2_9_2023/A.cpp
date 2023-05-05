#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution()
{
    int number;
    cin >> number;

    vector<int> arr(number);

    int sum = 0;
    int ones = 0, twoes = 0;
    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
        if (arr[i] == 2)
        {
            twoes++;
        }
        else
        {
            ones++;
        }
    }

    if (twoes % 2)
    {
        cout << -1 << endl;
        return;
    }
    if (twoes == 0)
    {
        cout << 1 << endl;
        return;
    }
    int cnt = 0;
    for (int i = 0; i < number - 1; i++)
    {
        if (arr[i] == 2)
            cnt++;
        if ((twoes / 2) == cnt)
        {
            cout << i + 1 << endl;
            return;
        }
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
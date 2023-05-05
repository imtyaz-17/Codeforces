#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int number;
    cin >> number;
    int arrayy[number];

    int operations = 0;

    for (int i = 0; i < number; i++)
        cin >> arrayy[i];

    for (int i = 0; i < number - 1; i++)
    {
        if ((arrayy[i] % 2 != 0 && arrayy[i + 1] % 2 != 0) || (arrayy[i] % 2 == 0 && arrayy[i + 1] % 2 == 0))
        {
            operations++;
        }
    }

    cout << operations << endl;
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
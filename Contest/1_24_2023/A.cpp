#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int number;
    cin >> number;
    int arrayy[number];

    int ones = 0;

    for (int i = 0; i < number; i++)
    {
        cin >> arrayy[i];
        if (arrayy[i] == 1)
        {
            ones++;
        }
    }
        cout << (number -ones/2)<< endl;

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
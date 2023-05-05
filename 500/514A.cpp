#include <bits/stdc++.h>
using namespace std;
int main()
{

    string number;
    getline(cin, number);

    if (number[0] > '4' && number[0] != '9')
    {
        number[0] = '0' + 9 - (number[0] - '0');
    }
    for (int p = 1; p < number.size(); p++)
    {
        if (number[p] > '4')
        {
            number[p] = '0' + 9 - (number[p] - '0');
        }
    }

    cout << number << endl;

    return 0;
}
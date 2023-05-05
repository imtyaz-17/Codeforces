#include <bits/stdc++.h>
using namespace std;

vector<int> addDigits(vector<int> prior, int input)
{

    vector<int> output(prior);
    if (input == 2)
    {
        output.push_back(2);
    }
    else if (input == 3)
    {
        output.push_back(3);
    }
    else if (input == 4)
    {
        output.push_back(2);
        output.push_back(2);
        output.push_back(3);
    }
    else if (input == 5)
    {
        output.push_back(5);
    }
    else if (input == 6)
    {
        output.push_back(3);
        output.push_back(5);
    }
    else if (input == 7)
    {
        output.push_back(7);
    }
    else if (input == 8)
    {
        output.push_back(2);
        output.push_back(2);
        output.push_back(2);
        output.push_back(7);
    }
    else if (input == 9)
    {
        output.push_back(2);
        output.push_back(3);
        output.push_back(3);
        output.push_back(7);
    }

    return output;
}

int main()
{

    int n;
    cin >> n;
    string number;
    getline(cin, number);
    vector<int> digits;
    for (int p = 0; p < n; p++)
    {
        digits = addDigits(digits, number[p] - '0');
    }
    sort(digits.rbegin(), digits.rend());
    for (int p = 0; p < digits.size(); p++)
    {
        cout << digits[p];
    }
    puts("");

    return 0;
}
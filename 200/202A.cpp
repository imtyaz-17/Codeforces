#include <bits/stdc++.h>
using namespace std;

int main()
{

    string input;
    getline(cin, input);

    char outChar = 'a';
    int outNum = 0;
    for (int k = 0; k < input.size(); k++)
    {
        if (input[k] > outChar)
        {
            outChar = input[k];
            outNum = 1;
        }
        else if (input[k] == outChar)
        {
            ++outNum;
        }
    }

    for (int k = 0; k < outNum; k++)
    {
        printf("%c", outChar);
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int numb, i;
        cin >> numb;

        int value = numb * numb;
        int arrayy[numb][numb];
        int helper = 1;

        for (i = 0; i < numb; i++)
        {
            if (i % 2 != 0)

            {
                for (int j = numb - 1; j >= 0; j--)
                {
                    if (j % 2 == 0)
                        arrayy[i][j] = value--;
                    else
                        arrayy[i][j] = helper++;
                }
            }
            else
            {

                for (int j = 0; j < numb; j++)
                {
                    if (j % 2 == 0)
                        arrayy[i][j] = helper++;
                    else
                        arrayy[i][j] = value--;
                }
            }
        }
        for (int i = 0; i < numb; i++)
        {
            for (int j = 0; j < numb; j++)
            {
                cout << arrayy[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
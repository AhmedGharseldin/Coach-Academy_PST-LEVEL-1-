//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1981

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n)
    {
        n--;
        int Arr[9][9] = {};
        //cin array from user
        for (int i = 0; i < 9; i += 2)
        {
            {
                for (int j = 0; j <= i; j += 2)
                    cin >> Arr[i][j];
            }
        }
        // calculate missing numbers on odd rows
        for (int i = 2; i < 9; i += 2)
        {
            {
                for (int j = 1; j <= i - 1; j += 2)
                    Arr[i][j] = (Arr[i - 2][j - 1] - (Arr[i][j - 1] + Arr[i][j + 1])) / 2;
            }
        }
        // calculate missing numbers on even rows

        for (int i = 1; i < 9; i += 2)
        {
            {
                for (int j = 0; j <= i + 1; j++)
                    Arr[i][j] = (Arr[i + 1][j] + Arr[i + 1][j + 1]);
            }
        }
        //printing final array
        for (int i = 0; i < 9; i++)
        {
            {
                for (int j = 0; j <= i; j++)
                    if (j == i)
                        cout << Arr[i][j] << endl;
                    else
                        cout << Arr[i][j] << " ";
            }
        }
    }

    return 0;
}
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=482

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0, x, y;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        int cntr1 = 0, cntr2 = 0, arr[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sum += arr[i][j];
            }
            if (sum % 2 != 0)
            {
                cntr1++;
                x = i + 1;
            }
            sum = 0;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sum += arr[j][i];
            }
            if (sum % 2 != 0)
            {
                cntr2++;
                y = i + 1;
            }
            sum = 0;
        }
        if (cntr1 == 0 && cntr2 == 0)
            cout << "OK" << endl;
        else if (cntr1 == 1 && cntr2 == 1)
            cout << "Change bit (" << x << "," << y << ")" << endl;
        else
            cout << "Corrupt" << endl;
    }
    return 0;
}
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2465

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cas = 1;
    while (cin >> n && n != 0)
    {
        int arr[n][n] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        int x, c = 0, totalsum = 0;
        x = (n + 1) / 2;
        int sum[x] = {};
        while (c < x)
        {
            for (int i = c; i < n - c; i++)
            {
                for (int j = c; j < n - c; j++)
                {
                    totalsum += arr[i][j];
                }
            }
            sum[c] = totalsum;
            totalsum = 0;
            c++;
        }
        cout << "Case " << cas << ": ";

        for (int i = 0; i < x; i++)
        {
            if (i == c - 1)
            {
                cout << sum[i] << endl;
                break;
            }
            cout << sum[i] - sum[i + 1] << " ";
        }
        cas++;
    }
    return 0;
}

//https://codeforces.com/problemset/problem/181/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    char P[101][101] = {};
    cin >> n >> m;
    int x[n + 1] = {}, y[m + 1] = {};

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> P[i][j];
            if (P[i][j] == '*')
            {
                x[i]++;
                y[j]++;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (x[i] == 1 && y[j] == 1)
                cout << i << " " << j << endl;
        }
    }
    return 0;
}
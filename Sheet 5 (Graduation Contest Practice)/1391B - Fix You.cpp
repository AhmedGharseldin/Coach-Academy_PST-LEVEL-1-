//https://codeforces.com/problemset/problem/1391/B

#include <bits/stdc++.h>
#include <fstream>
typedef long long ll;
using namespace std;

int main()
{
    int t, n, m, c;

    cin >> t;
    while (t)
    {
        t--;
        c = 0;
        cin >> n >> m;
        char **arr = new char *[n];
        for (int i = 0; i < n; i++)
            arr[i] = new char[m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];

        for (int i = 0; i < n; i++)
            for (int j = m - 1; j < m; j++)
                if (arr[i][j] == 'R')
                    c++;
        for (int i = n - 1; i < n; i++)
            for (int j = 0; j < m; j++)
                if (arr[i][j] == 'D')
                    c++;
        cout << c << endl;
    }
    return 0;
}
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2345

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t, n, m, x, y, cas = 0;
    char chars[10][10];
    int s[10][10], cs[10][10];
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        //creating main int array
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> chars[i][j];
                s[i][j] = chars[i][j] - 48;
                cs[i][j] = s[i][j];
            }
        }
        cin >> m;
        char o[10] = {0};
        for (int i = 0; i <= m; i++)
        {
            cin.getline(o, 10);
            switch (o[0])
            {
            case 't':
                for (int i = 0; i < n; i++)
                    for (int j = 0; j < n; j++)
                    {
                        cs[i][j] = s[i][j];
                    }
                for (int i = 0; i < n; i++)
                    for (int j = 0; j < n; j++)
                    {
                        s[i][j] = cs[j][i];
                    }
                break;
            case 'r':
                x = o[4] - '0';
                y = o[6] - '0';
                for (int i = 0; i < n; i++)
                    swap(s[x - 1][i], s[y - 1][i]);
                break;
            case 'c':
                x = o[4] - '0';
                y = o[6] - '0';
                for (int i = 0; i < n; i++)
                    swap(s[i][x - 1], s[i][y - 1]);

                break;
            case 'd':
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        if (s[i][j] == 0)
                            s[i][j] = 9;
                        else
                            s[i][j]--;
                    }
                }
                break;
            case 'i':
                for (int i = 0; i < n; i++)
                    for (int j = 0; j < n; j++)
                    {
                        if (s[i][j] == 9)
                        {
                            s[i][j] = 0;
                        }
                        else
                            s[i][j]++;
                    }
                break;
            }
        }
        cas++;
        cout << "Case #" << cas << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << s[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

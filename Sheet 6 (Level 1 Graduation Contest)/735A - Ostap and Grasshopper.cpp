//https://codeforces.com/problemset/problem/735/A

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, startIndex, endIndex, flag = 0;
    string s;
    cin >> n >> m >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'G')
            startIndex = i;
        if (s[i] == 'T')
            endIndex = i;
    }
    if (startIndex > endIndex)
    {
        for (int i = startIndex; i >= endIndex; i -= m)
        {
            if (s[i] == 'T')
                flag = 1;
            if (s[i] == '#')
            {
                flag = 0;
                break;
            }
        }
    }
    else
    {
        for (int i = startIndex; i <= endIndex; i += m)
        {
            if (s[i] == 'T')
                flag = 1;
            if (s[i] == '#')
            {
                flag = 0;
                break;
            }
        }
    }
    cout << (flag == 1 ? "YES" : "NO") << endl;
}

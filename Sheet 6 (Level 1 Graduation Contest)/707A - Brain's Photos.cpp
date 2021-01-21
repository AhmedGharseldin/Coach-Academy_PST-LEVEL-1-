//https://codeforces.com/problemset/problem/41/A

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, x, flag = 0;
    cin >> n >> m;
    x = n * m;
    string s;
    for (int i = 0; i < x; i++)
    {
        cin >> s;
        if (s == "C" || s == "M" || s == "Y")
            flag = 1;
    }
    cout << (flag == 0 ? "#Black&White" : "#Color") << endl;
    return 0;
}
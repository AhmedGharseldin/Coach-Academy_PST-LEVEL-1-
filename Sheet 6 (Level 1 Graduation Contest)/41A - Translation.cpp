//https://codeforces.com/problemset/problem/41/A

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int sn, st, x, flag = 0;
    string s, t;
    cin >> s >> t;
    reverse(t.begin(), t.end());
    if (s == t)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

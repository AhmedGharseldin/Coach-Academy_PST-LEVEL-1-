//https://codeforces.com/problemset/problem/723/A

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, x, ans, flag = 0;
    cin >> n >> m >> x;

    ans = max({n, m, x}) - min({n, m, x});

    cout << ans << endl;
    return 0;
}
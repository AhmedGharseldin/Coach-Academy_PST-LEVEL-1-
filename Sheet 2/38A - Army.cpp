//https://codeforces.com/problemset/problem/38/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d[100] = {}, a, b, x = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
        cin >> d[i];
    cin >> a >> b;

    for (int i = b - 1; i >= a; i--)
        x += d[i];
    cout << x;
    return 0;
}

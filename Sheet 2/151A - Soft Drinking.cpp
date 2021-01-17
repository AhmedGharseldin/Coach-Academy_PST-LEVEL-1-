//https://codeforces.com/problemset/problem/151/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np, shots, salt, lemon;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    shots = (k * l) / nl;
    salt = p / np;
    lemon = c * d;

    if (shots <= salt && shots < lemon)
        cout << shots / n << endl;
    if (salt < shots && salt <= lemon)
        cout << salt / n << endl;
    if (lemon <= shots && lemon < salt)
        cout << lemon / n << endl;
    if (lemon == shots && lemon == salt)
        cout << lemon / n << endl;
    return 0;
}
